#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char myList[20] = "hello world";

    char* p = new char[strlen(myList) + 1];
    strcpy(p,myList);
    cout<<p<<"\n";    //c++�ַ����͵�ַ֮����ӳ�䣬�����ַ�������͵�ַ��������ͬ��
    cout<<*(p+4)<<"\n"; //ָ������ĸ��ַ�

    // system("pause");
    return 0;
    
}