#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;

#define NORMAL 0
#define TIME_OUT 1
#define THREE_DUP_ACK 2

const int MSS = 100;
int ssthresh = 16 * MSS;
int cwnd = 1 * MSS;
int index = 1;
int transData = 0;
int sumData;

//随机拥塞
int isCrowd(int cwnd){
    int p = cwnd / MSS * 2; //产生拥塞概率为p%
    if(rand() % 101 < p){
        if(rand() % 101 < 50){  //50%概率超时
            return TIME_OUT;
        }else{  //50%概率收到3个冗余ACK
            return THREE_DUP_ACK;
        }
    }else{
        return NORMAL;
    }
}

void startTrans(){
    bool isSlowStart = true;
    //开始传输数据
    transData += cwnd;
    if(cwnd < ssthresh){    //慢启动
        cout<<"*******************第"<<index++<<"轮传输*******************"<<endl;
        cout<<"慢启动：拥塞窗口cwnd="<<cwnd / MSS<<"慢启动门限ssthresh="<<ssthresh / MSS<<endl;
    }else{  //拥塞避免
        cout<<"*******************第"<<index++<<"轮传输*******************"<<endl;
        cout<<"拥塞避免：拥塞窗口cwnd="<<cwnd / MSS<<"慢启动门限ssthresh="<<ssthresh / MSS<<endl;
        isSlowStart = false;
    }

    int crow = isCrowd(cwnd);
    if(!crow){
        if(isSlowStart){
            cout<<"网络正常，继续慢启动。"<<endl;
            cwnd *= 2;
        }else{
            cout<<"网络正常，线性增长。"<<endl;
            cwnd += MSS;
        }
    }else if(crow == TIME_OUT){
        cout<<"检测到超时，ssthresh = cwnd / 2，cwnd = MSS"<<endl;
        transData -= cwnd;
        ssthresh = cwnd / 2;
        cwnd = 1 * MSS;
    }else if(crow == THREE_DUP_ACK){
        cout<<"检测到三个冗余的ACK，ssthresh = cwnd / 2，cwnd = ssthresh"<<endl;
        ssthresh = cwnd / 2;
        cwnd = ssthresh;
    }else{
        cout<<"判断拥塞异常，异常返回值："<<crow<<endl;
        exit(1);
    }

    if(transData < sumData){
        cout<<"已经传输"<<transData<<"B,还剩"<<sumData - transData<<"B"<<endl;
    }else{
        cout<<"传输完成"<<endl;
        return;
    }

    cout<<endl;
    // Sleep(1000 * (cwnd * 3) + 1);   //随机停1-3秒
    startTrans();

}

int main(){
    // srand(time(0));
    cout<<"请输入本次需要传输的数据量大小(单位：字节)：";
    cin>>sumData;
    cout<<"******************************开始传输******************************\n"<<endl;
    startTrans();
    system("pause");
    return 0;
}