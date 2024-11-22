#include<iostream>
using namespace std;
main()
{
    //odd and even program
     int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a%2==0){
    cout<<"it is even number\n";
    }
    else{
        cout<<"it is odd number\n";
    }

    
    //print grade program
    cout<<"Enter a number:";
    cin>>a;
    if(a>=90)
    {
        cout<<"A\n";
    }
    else if(a<=89 && a>=80)
    {
        cout<<"B\n";
    }
    else if(a<=79 && a>=70)
    {
        cout<<"C\n";
    }
    else if(a<=69 && a>=60)
    {
        cout<<"D\n";
    }
    else if(a<=59 && a>=50)
    {
        cout<<"F\n";
    }
    else{
        cout<<"Fail\n";
    }


    //print age program
    cout<<"Enter a number:";
    cin>>a;
    if(a>=18){
        cout<<"You are eligible\n";
    }
    else{
        cout<<"You are not eligible\n";
    }


    //leap year program
    cout<<"Enter a year:";
    cin>>a;
    if(a%4==0){
        cout<<"This is leap year\n";
    }
    else{
        cout<<"This is not leap year\n";
    }

}

