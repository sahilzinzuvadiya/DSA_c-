// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include<iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
    for(int r=5;r>=1;r--)
    {
        for(int c=r;c<=5;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }cout<<endl;

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
for(int a=5;a>=1;a--)
    {
        for(int b=5;b>=a;b--)
        {
            cout<<a;
        }
        cout<<endl;
    }cout<<endl;


// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
int x,y;
for(int x=1;x<=5;x++)
    {
        for(int y=x;y<=5;y++)
        {
            cout<<y;
        }
        cout<<endl;
    }cout<<endl;

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5
for(int s=1;s<=5;s++)
    {
        for(int q=5;q>=s;q--)
        {
            cout<<s;
        }
        cout<<endl;
    }cout<<endl;
}