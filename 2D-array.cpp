#include<iostream>
using namespace std;
main(){
    // find the sum of diagonal elements 
    int a;
    cout<<"Enter the array's row & column:";
    cin>>a;

    int arr[a][a];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>arr[i][j];    
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++){
                cout<<arr[i][j]<<"\t";    
        }
        cout<<endl;
    }
    
    for(int i=0;i<a;i++)
    {
        cout<<arr[i][i];
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum+=arr[i][i];
    }
    cout<<"sum="<<sum<<endl;
    
    // print and find the sum of all boundary elements
    int b;
    cout<<"Enter the array's row & column:";
    cin>>b;

    int array[b][b];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>array[i][j];    
        }
    }   
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++){
                cout<<array[i][j]<<"\t";    
        }
        cout<<endl;
    }
    int total=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++){
           
           total+=array[i][j];
                
        }
    }    
    cout<<"total="<<total<<endl;


    //perform the addition operation of two 2D arrays & store it inanother array
    int row;
    cout<<"Enter the array's row size:";
    cin>>row;

    int col;
    cout<<"Enter the array's column size:";
    cin>>col;

    int array1[row][col],array2[row][col],array3[row][col];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>array1[i][j];    
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
           cout << "b[" << i <<"][" << j <<"] = ";
            cin>>array2[i][j];    
        }
    }   

    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
           
           array3[i][j]=array1[i][j]+array2[i][j];
                 
        }
        cout<<endl;
    }

    cout << "array c is"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
           
          
           cout<<array3[i][j]<<"\t";      
        }
        cout<<endl;
    }

}