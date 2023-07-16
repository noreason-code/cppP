#include<iostream>
#include "ani.h"
#include<string>

using namespace std;

int main(){
    // Ani mao("kite",3);
    Ani gou;//这么写不报错的情况：（1）没有构造函数，用默认的；（2）有构造函数但是没有形参的情况。
    // mao.showName();
    // mao.showAge();
    gou.showName();
    gou.showAge();
    system("pause");
    return 0;
}
