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

//���ӵ��
int isCrowd(int cwnd){
    int p = cwnd / MSS * 2; //����ӵ������Ϊp%
    if(rand() % 101 < p){
        if(rand() % 101 < 50){  //50%���ʳ�ʱ
            return TIME_OUT;
        }else{  //50%�����յ�3������ACK
            return THREE_DUP_ACK;
        }
    }else{
        return NORMAL;
    }
}

void startTrans(){
    bool isSlowStart = true;
    //��ʼ��������
    transData += cwnd;
    if(cwnd < ssthresh){    //������
        cout<<"*******************��"<<index++<<"�ִ���*******************"<<endl;
        cout<<"��������ӵ������cwnd="<<cwnd / MSS<<"����������ssthresh="<<ssthresh / MSS<<endl;
    }else{  //ӵ������
        cout<<"*******************��"<<index++<<"�ִ���*******************"<<endl;
        cout<<"ӵ�����⣺ӵ������cwnd="<<cwnd / MSS<<"����������ssthresh="<<ssthresh / MSS<<endl;
        isSlowStart = false;
    }

    int crow = isCrowd(cwnd);
    if(!crow){
        if(isSlowStart){
            cout<<"����������������������"<<endl;
            cwnd *= 2;
        }else{
            cout<<"��������������������"<<endl;
            cwnd += MSS;
        }
    }else if(crow == TIME_OUT){
        cout<<"��⵽��ʱ��ssthresh = cwnd / 2��cwnd = MSS"<<endl;
        transData -= cwnd;
        ssthresh = cwnd / 2;
        cwnd = 1 * MSS;
    }else if(crow == THREE_DUP_ACK){
        cout<<"��⵽���������ACK��ssthresh = cwnd / 2��cwnd = ssthresh"<<endl;
        ssthresh = cwnd / 2;
        cwnd = ssthresh;
    }else{
        cout<<"�ж�ӵ���쳣���쳣����ֵ��"<<crow<<endl;
        exit(1);
    }

    if(transData < sumData){
        cout<<"�Ѿ�����"<<transData<<"B,��ʣ"<<sumData - transData<<"B"<<endl;
    }else{
        cout<<"�������"<<endl;
        return;
    }

    cout<<endl;
    // Sleep(1000 * (cwnd * 3) + 1);   //���ͣ1-3��
    startTrans();

}

int main(){
    // srand(time(0));
    cout<<"�����뱾����Ҫ�������������С(��λ���ֽ�)��";
    cin>>sumData;
    cout<<"******************************��ʼ����******************************\n"<<endl;
    startTrans();
    system("pause");
    return 0;
}