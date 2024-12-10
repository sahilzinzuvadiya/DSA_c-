#include<iostream>
using namespace std;
main(){
//find array length
  int a;
  cout<<"Enter array size:";
  cin>>a;

  int b[a],i;
  cout << "Enter array elements:" << endl;
  for(i=0;i<a;i++){
  cout << "a[" << i << "] = ";
  cin>>b[i];
  }

  cout << "Length of an Array: " << a << endl;

//find average
  int x;
  cout<<"Enter array size:";
  cin>>x;

  int y[x],s,total=0,avg=0;
  cout << "Enter array elements:" << endl;
  for(s=0;s<x;s++){
  cout << "a[" << s << "] = ";
  cin>>y[s];
  }
  for(s=0;s<x;s++)
  {
    total=total+y[s];
  }
  avg=total/x;
  cout<<"Average="<<avg<<endl;


//Write a Program to perform the addition operation of two 1D arrays & store it in another array

int p[5]={2,4,6,8,9};

int q[5]={11,12,33,44,55};

int r[5];

for(int i=0;i<5;i++){
  r[i]=p[i]+q[i];
  cout<<r[i]<<" ";
}
}
