#include<iostream>

using namespace std;

int main(){
    int num[4] = {1,2,3,4};
    int* addr = &num[1];    //ȡ����ͷλ�÷�1
    // int* addr = num;    //ȡ����ͷλ�÷�2
    cout<<"������ĵ�ַ�ǣ�"<<addr<<endl;
    cout<<"������ĵ�һ��Ԫ���ǣ�"<<*addr<<endl;

    system("pause");
    return 0;
}