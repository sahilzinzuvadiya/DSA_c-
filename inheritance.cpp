#include<iostream>
using namespace std;
class Test{
    public:
    void setdata(){
        cout<<"This is base class-1"<<endl;
    }
};
class Exam{
    public:
    void display(){
        cout<<"This is base class-2"<<endl;
    }
};
class Test1:public Test,public Exam{
    public:
        void getdata(){
            cout<<"This is derived class"<<endl;
        }
};
int main(){
    Test1 t1;
    t1.getdata();
    t1.setdata();
    t1.display();
}
