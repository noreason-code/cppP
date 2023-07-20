#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char myList[20] = "hello world";

    char* p = new char[strlen(myList) + 1];
    strcpy(p,myList);
    cout<<p<<"\n";    //c++字符串和地址之间有映射，所以字符串本身和地址代表性相同吧
    cout<<*(p+4)<<"\n"; //指定输出哪个字符

    // system("pause");
    return 0;
    
}