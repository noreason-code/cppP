#include<iostream>
#include<cstring>

using namespace std;

int main(){
    const int arrSize = 10;
    char ch1[arrSize];
    char ch2[arrSize];
    cout<<"������" "������";

    cin.getline(ch1,arrSize).getline(ch2,arrSize);  //�������������ˣ�����ʱ�س��л�������һ��
    cout<<ch1<<" "<<ch2<<"\n";

    // cin.get(ch1,arrSize);
    // cout<<ch1<<"\n";
    // cout<<strlen(ch1)<<"\n";

    // cin.getline(ch1,arrSize);   //�����пո�
    // cout<<ch1<<endl;
    // cout<<strlen(ch1)<<"\n";

    // cin>>ch1;    //�����пո�
    // cout<<"��ã�"<<ch1<<"\n";
    // cout<<strlen(ch1)<<" "<<sizeof(ch1)<<"\n";
    system("pause");
    return 0;

}