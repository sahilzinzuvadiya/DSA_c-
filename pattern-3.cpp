#include<iostream>
using namespace std;
main(){
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1
    for(int i=5;i>=1;i--){
        
        for(int j=1;j<=i;j++)
        {
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

// A
// B A
// C B A
// D C B A
// E D C B A
    for(char i='A';i<='E';i++){

        for(char j=i;j>='A';j--){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
    int count=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++){
            count++;
            cout<< count;
        }
        cout<<endl;
    }
    cout<<endl;

//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
for(int i=1;i<=5;i++){

    for(int k=i;k<=5;k++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<" *";
    }
    cout<<endl;
}
}