#include<iostream>
using namespace std;
class Poly{
    public:
        void display(){
            cout<<"Use of polymorphism"<<endl;
        }
        int display(int a,int b,int c){
            return a+b+c;
        }
        int display(int a,int b){
            return a*b;
        }
        void Test(){
            cout<<"How are you";
        }
};
class Run:public Poly{
    public:
        void Test(){
            cout<<"How are you";
        }
        int display(int a,int b,int c){
            return a+b+c;
        }
    
};
int main(){
    Poly p1,p2,p3;
    Run r1,r2;
    p1.display();
    cout<<"multiplication="<<p2.display(5,5)<<endl;
    cout<<"Addition="<<p3.display(3,9,8)<<endl;
    r1.Test();
    cout<<endl;
    cout<<"Addition="<<r2.display(6,5,9)<<endl;
    return 0;
}