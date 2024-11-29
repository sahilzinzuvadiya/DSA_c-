#include<iostream>
using namespace std;
main(){
    for(char i='a';i<='z';i=i+4)
    {
            cout<<i<<endl;
    }cout<<endl;


    int a,count=0;
    cout<<"Enter number:";
    cin>>a;
    while(a!=0){
            a = a/10;
            count++;
        }
    cout << count;
    cout<<endl;

     
    int first,last,b,c,sum;
    cout<<"Enter number:";
    cin>>b;
    last=b%10;
    c=b;
    while(c>=10){
        c/=10;
    }
    first=c;
    sum=first+last;
    cout << "The sum of the first and last digits is: " << sum << endl;
}