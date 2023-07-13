#ifndef STOCK00_H_
#define STOCK00_H_

#include<string>

using namespace std;

class Stock
{
    private:
        string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){ //���������ж���ĺ�������������������������Ҳ���������������ⶨ�壬����Ҫ��inline��eg��inline void Stock::set_tot(xxx)xxxx
            total_val = shares * share_val;
        }
    public:
        void acquire(const string & co,long n,double pr);
        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        void show();

};  //����������ķֺ�

#endif  //��ǰ��#ifndef STOCK00_H_һ��ʹ��