#include<iostream>
#include<cstring>

using namespace std;

int main(){
    const int arrSize = 10;
    char ch1[arrSize];
    char ch2[arrSize];
    cout<<"请输入" "姓名：";

    cin.getline(ch1,arrSize).getline(ch2,arrSize);  //把两个都输入了，输入时回车切换输入另一个
    cout<<ch1<<" "<<ch2<<"\n";

    // cin.get(ch1,arrSize);
    // cout<<ch1<<"\n";
    // cout<<strlen(ch1)<<"\n";

    // cin.getline(ch1,arrSize);   //可以有空格
    // cout<<ch1<<endl;
    // cout<<strlen(ch1)<<"\n";

    // cin>>ch1;    //不能有空格
    // cout<<"你好！"<<ch1<<"\n";
    // cout<<strlen(ch1)<<" "<<sizeof(ch1)<<"\n";
    system("pause");
    return 0;

}