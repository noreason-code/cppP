#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char myList[20] = "hello world";

    // char* p = new char[strlen(myList) + 1];
    // strcpy(p,myList);
    // cout<<p<<"\n";    //c++字符串和地址之间有映射，所以字符串本身和地址代表性相同吧
    // cout<<*(p+4)<<"\n"; //指定输出哪个字符

    // char* ps = myList;
    // cout<<*ps<<endl;
    // cout<<ps<<endl;
    // int* pss = (int*)ps;    //字符串直接用数组名字的话不是数组起始地址了而是整个数组的内容，如果想要字符串起始地址的话用这种方法
    // cout<<char(*pss)<<endl; //由于上面声明的pss是指向int的指针，所以这里还需要再转换一下

    // cout<<myList[0]<<endl;
    char* pp = &myList[0];
    cout<<pp<<endl; //显而易见了，字符串的存储地址和字符串在引用时等价
    cout<<*pp<<endl;
    cout<<(int*)pp<<endl;
    return 0;
    
}