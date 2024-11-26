#include<iostream>
using namespace std;
main(){
     //odd and even program
    int a;
    cout<<"Enter a number:";
    cin>>a;
    (a%2==0)? cout<<"it is even number\n": cout<<"it is odd number\n";

     //print grade program
    cout<<"Enter a number:";
    cin>>a;
    // (a>=90)?cout<<"A\n":cout<<"B\n";
    // (a<=89 && a>=80)?cout<<"B\n":cout<<"C\n";
    // (a<=79 && a>=70)?cout<<"C\n":cout<<"D\n";
    // (a<=69 && a>=60)?cout<<"D\n":cout<<"F\n";
    // (a<=59 && a>=50)?cout<<"F\n":cout<<"fail\n";
    cout<<( a >= 90 ?"A\n" :
            a >= 80 ? "B\n" :
            a >= 70 ? "C\n" :
            a >= 60 ? "D\n" :
            a >= 50 ? "F\n" :"Fail\n");


    //print age program
    cout<<"Enter a number:";
    cin>>a;
    (a>=18)?cout<<"You are eligible\n":cout<<"You are not eligible\n";


    //leap year program
    cout<<"Enter a year:";
    cin>>a;
    ((a%4==0 && a%100!=0) || (a%400==0))?cout<<"This is leap year\n":cout<<"This is not leap year\n";
}   


