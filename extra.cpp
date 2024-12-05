#include<iostream>
#include <iomanip>
using namespace std;
main(){
// int a,b,sum;
// cout<<"Enter number-1:";
// cin>>a;
// cout<<"Enter number-2:";
// cin>>b;
// sum=a+b;
// cout<<"addition="<<sum<<endl;
// sum=a-b;
// cout<<"subtraction="<<sum<<endl;
// sum=a*b;
// cout<<"multiplication="<<sum<<endl;
// sum=a/b;
// cout<<"division="<<sum<<endl;
// sum=a%b;
// cout<<"modules="<<sum;
// cout<<endl;

float pi=3.14159265;
cout<<fixed<<setprecision(4);
cout<<"value of pi="<<pi<<endl;

cout<<"value of pi with setw=|"<<setw(8)<<pi<<"|"<<endl;
cout<<"value of pi with setw=|"<<setw(10)<<pi<<"|"<<endl;
cout<<"value of pi with setw=|"<<setw(14)<<pi<<"|"<<endl;

cout<<scientific;
cout<<"value of pi with scientific="<<pi;
}