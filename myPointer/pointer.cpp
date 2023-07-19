#include<iostream>

using namespace std;

int main(){
    int num[4] = {1,2,3,4};
    int* addr = &num[1];    //取数组头位置法1
    // int* addr = num;    //取数组头位置法2
    cout<<"该数组的地址是："<<addr<<endl;
    cout<<"该数组的第一个元素是："<<*addr<<endl;

    system("pause");
    return 0;
}