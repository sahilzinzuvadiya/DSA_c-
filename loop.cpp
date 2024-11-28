#include<iostream>
using namespace std;
main(){
    int i=1;
     while(i<=10){
        cout<<i<<endl;
        i++;
     }cout<<"\n";

     int a=10;
        while(a>=1){
            cout<<a<<endl;
            a--;
        }


    int b=1,n;
    cout<<"Enter number:";
    cin>>n;
    while(b<=n){
        cout<<b<<endl;
        b++;
    }

    int s;
    cout<<"Enter number:";
    cin>>s;
    while(s>=1){
        if(s%2!=0)
            cout<<s<<endl;
            s--;
    }

    int v,x;
    cout<<"Enter first number:";
    cin>>v;
    cout<<"Enter second number:";
    cin>>x;
    while(v<=x)
    {
        if((v%4==0 && v%100!=0) || (v%400==0))
        {
            cout<<v<<endl;
            
        }
        v++;
    }

}