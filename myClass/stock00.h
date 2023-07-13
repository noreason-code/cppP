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
        void set_tot(){ //在类声明中定义的函数叫做内联函数。内联函数也可以在类声明以外定义，但是要加inline，eg：inline void Stock::set_tot(xxx)xxxx
            total_val = shares * share_val;
        }
    public:
        void acquire(const string & co,long n,double pr);
        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        void show();

};  //别忘了这里的分号

#endif  //和前面#ifndef STOCK00_H_一起使用