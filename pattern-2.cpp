#include<iostream>
using namespace std;
main(){
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<j;

        }
        cout<<endl;
    }
    cout<<endl;

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1


    for(int i=5;i>=1;i--)
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
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++){
            cout<<j;
        }
         cout<<endl;
    }
      for(int i=2;i<=5;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<j;
        }
         cout<<endl;
    }
}