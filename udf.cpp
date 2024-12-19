#include<iostream>
using namespace std;
int a;
void cube(){
    cout<<"Enter any number:";
    cin>>a;
    int res=a*a*a;
    cout<<"Cube="<<res<<endl;
}

void div(){
    int b;
        cout<<"Enter any number:";
        cin>>b;
        if(b%3==0 && b%5==0){
            cout<<"The given number is divisible by both 3 & 5"<<endl;
        }
        else{
            cout<<"The given number is not divisible by both 3 & 5"<<endl;
        }
}

void arr(){
   int x;
   cout<<"Enter array size:";
   cin>>x;

  int c[x],sum=0;
  cout << "Enter array elements:" << endl;
  for(int i=0;i<x;i++){
  cout << "a[" << i << "] = ";
  cin>>c[i];
  }
  for(int i=0;i<x;i++){
    sum=sum+c[i];
  }

  cout<<"sum of all element="<<sum<<endl;
}
main(){
        cube();

        div();
        
        arr();
}