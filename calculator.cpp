#include<iostream>
using namespace std;
void calculator()
{
    int a,b,c,sum;
    cout<<"Enter first number:";
    cin>>b;
    cout<<endl;
    cout<<"Enter second number:";
    cin>>c;
    cout<<"press 1 for +"<<endl;
    cout<<"press 2 for -"<<endl;
    cout<<"press 3 for *"<<endl;
    cout<<"press 4 for /"<<endl;
    cout<<"press 5 for %"<<endl;
    cout<<"press 0 for exit"<<endl;
    cout<<"Enter your choice:";
    cin>>a;
    cout<<endl;
   
    switch(a){
        case 1:
            sum=b+c;
            cout<<"Addition of "<<b<<" and "<< c<<" is="<<sum;
            break;

        case 2:
            sum=b-c;
            cout<<"Subtraction of "<<b<<" and "<< c<<" is="<<sum;
            break;

        case 3:
            sum=b*c;
            cout<<"Multiplication of "<<b<<" and "<< c<<" is="<<sum;
            break;

        case 4:
            sum=b/c;
            cout<<"Division of "<<b<<" and "<< c<<" is="<<sum;
            break;

        case 5:
            sum=b%c;
            cout<<"Modules of "<<b<<" and "<< c<<" is="<<sum;
            break;

        case 0:
            break;

        default:
            cout<<"Invalid choice";

            
    }
}
main(){
    calculator();
}