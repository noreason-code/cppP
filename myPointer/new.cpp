#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char myList[20] = "hello world";

    char* p = new char[strlen(myList) + 1];
    strcpy(p,myList);
    cout<<p<<"\n";    //c++�ַ����͵�ַ֮����ӳ�䣬�����ַ�������͵�ַ��������ͬ��
    cout<<*(p+4)<<"\n"; //ָ������ĸ��ַ�

    char* ps = myList;
    cout<<*ps<<endl;
    cout<<ps<<endl;
    int* pss = (int*)ps;    //�ַ���ֱ�����������ֵĻ�����������ʼ��ַ�˶���������������ݣ������Ҫ�ַ�����ʼ��ַ�Ļ������ַ���
    cout<<char(*pss)<<endl; //��������������pss��ָ��int��ָ�룬�������ﻹ��Ҫ��ת��һ��

    // system("pause");
    return 0;
    
}