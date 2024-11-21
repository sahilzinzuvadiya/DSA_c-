//neutral number
#include<iostream>
using namespace std;
main(){
    int s;
    cout<<"Enter value of a:";
    cin>>s;
    if(s==0){
        cout<<"This number is neutral";
    }
    else if(0>s){
        cout<<"This number is negative";
    }
    else{
        cout<<"This number is positive";
    }
}