#include<iostream>
#include"stock00.h" //��˫����

using namespace std;

void Stock::acquire(const string & co,long n,double pr){    //��Ա������������ͨ�������岻ͬ��(1/2):��Ҫ����������������::
    company = co;   //��Ա������������ͨ�������岻ͬ��(2/2):��Ա��������ʱ���Է������private���
    if(n < 0){
        cout<<"Number of shares can't be negative;"<<company<<"shares set to 0. \n";
        shares = 0;
    }else{
        shares = n;
    }
    share_val = pr;
    set_tot;
}

void Stock::buy(long num,double price){
    if(num < 0){
        cout<<"bulabula"<<endl;
    }
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num,double price){
    if(num < 0){
        cout<<"hahaha"<<endl;
    }
    else if(num > shares){
        cout<<"lalalalala"<<endl;
    }
    else{
        shares -= num;
        share_val  = price;
        set_tot();
    }
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show(){
    cout<<"company:"<<company<<endl;
    cout<<"shares:"<<shares<<endl;
    cout<<"share price:"<<share_val<<endl;
    cout<<"total"<<total_val<<endl;
}

