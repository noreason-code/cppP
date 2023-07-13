#include<iostream>
#include "stock00.h"

using namespace std;

int main(){
    Stock hh;
    hh.acquire("hhs",20,12.5);
    hh.show();

    system("pause");
    return 0;
}