#include<iostream>
using namespace std;
class Base{
    public:
        void get(){
            cout<<"This is a base class-1"<<endl;
        }
};
class Base1:public Base{
    public:
        void set(){
            cout<<"This is a derived class-1"<<endl;
        }
};
class Base2:public Base{
    public:
        void see(){
            cout<<"This is a derived class-2"<<endl;
        }
};
class Base3:public Base1,public Base2{
    public:
        void test(){
            cout<<"This is a derived class-3"<<endl;
        }
};
int main(){
    Base3 b1;
    Base1 b2;
    b2.get();
    b1.set();
    b1.see();
    b1.test();  
}