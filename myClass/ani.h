#ifndef ANI_H_
#define ANI_H_
#include<iostream>
#include<string>
using namespace std;

class Ani
{
    private:
        string m_name;
        int m_age;
    public:
        void showName();
        void showAge();
        Ani(string name,int age){
            m_name = name;
            m_age = age;
        }       
};

inline void Ani::showName(){
    cout<<"�ҵ������ǣ�"<<m_name<<endl;
}
inline void Ani::showAge(){
    cout<<"�ҵ������ǣ�"<<m_age<<endl;
}

#endif