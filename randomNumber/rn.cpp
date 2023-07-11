#include<iostream>
// #include<cstdlib>
#include<ctime>
#include<random>

using namespace std;

int main(){
    default_random_engine e;
    bernoulli_distribution u(0.6);  //生成1的概率是0.6
    e.seed(time(0));

    for(int i=0;i<10;i++){
        cout<<u(e)<<endl;
    }

    system("pause");
    return 0;
}