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
        // Ani(string name,int age){
        //     m_name = name;
        //     m_age = age;
        // }    
        Ani(){
            m_name = "hehe";
            m_age = 4;
        }   //构造函数名字与类的名字一样。
        ~Ani(){
            cout<<"析构函数，销毁对象。"<<endl;
        }//析构函数，销毁对象，不是new出来的话没啥用。命名规则：类名前面加个~
};

inline void Ani::showName(){
    cout<<"我的名字是："<<m_name<<endl;
}
inline void Ani::showAge(){
    cout<<"我的年龄是："<<m_age<<endl;
}

#endif