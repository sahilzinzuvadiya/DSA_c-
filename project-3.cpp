#include<iostream>
using namespace std;
main(){
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45
    for(int i=41;i<=45;i++)
    {
        for(int j=41;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
// 11
// 12 13
// 14 15 16
// 17 18 19 20
int count=10;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            count++;
            cout<<count;
            
        }
        cout<<endl;     
    }
    cout<<endl;

// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1
for(int i=5;i>=1;i--){
    for(int k=5;k>i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        if(j%2==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    cout<<endl;
}
cout<<endl;
//          5
//        4 5 4
//      3 4 5 4 3
//    2 3 4 5 4 3 2
//  1 2 3 4 5 4 3 2 1
for(int i=5;i>=1;i--){
    for(int k=1;k<i;k++){
        cout<<" ";
    }
    for(int j=i;j<=5;j++){
        cout<<j;
    }
    for(int j=4;j>=i;j--){
        cout<<j;
    }
    cout<<endl;
}
cout<<endl;

//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1
 for(int i=1;i<=5;i++)
    {
        
        for(int j=1;j<=i;j++)
        {   
            if(j<=i)
            {
                cout<<j;
            }
            else{
                cout<<"  ";
            }
            
        }
        for(int j=5;j>=1;j--)
        {
            if(j<=i){
                
                cout<<j;
        }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    cout<<endl;

// * * * * *
// *	   *
// * * * * *
// *
// *

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(i==1  || i==3 ){
            cout<<"*";
        }
        else if(j==1){
            cout<<"*";
        }
        else if(i==2 && j==5){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}


}