#include<iostream>
using namespace std;
main(){
    //Find sum of all elements in matrix
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
    
    int sum=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++){
            sum+=arr[i][j];
        }
        
    }
    cout<<"sum="<<sum<<endl;

    //Find sum of even index elements
    int b;
    cout<<"Enter the array's row & column:";
    cin>>b;

    int arr1[b][b];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>arr1[i][j];    
        }
    }    

    int sum1=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++){
            if( j%2==0){
                cout<<arr1[i][j]<<endl;
                sum1+=arr1[i][j];
            }
            
        }
        
    }
    cout<<"sum="<<sum1<<endl;

     //Find sum of odd index elements
    int c;
    cout<<"Enter the array's row & column:";
    cin>>c;

    int arr2[c][c];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>arr2[i][j];    
        }
    }    

    int sum2=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++){
            if(j%2!=0){
                cout<<arr2[i][j]<<endl;
                sum2+=arr2[i][j];
            }
            
        }
        
    }
    cout<<"sum="<<sum2<<endl;

    //Find sum of left elements in matrix
    int d;
    cout<<"Enter the array's row & column:";
    cin>>d;
    
    int arr3[d][d];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>arr3[i][j];    
        }
    }
      for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++){
                cout<<arr3[i][j]<<"\t";    
        }
        cout<<endl;
    }    
    int sum3=0;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++){
            if(j==0){
                cout<<arr3[i][j]<<endl;
                sum3+=arr3[i][j];
            }
            
        }
        
    }
    cout<<"sum="<<sum3<<endl;

    int e;
    cout<<"Enter the array's row & column:";
    cin>>e;
    
    int arr4[e][e];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<e;i++)
    {
        for(int j=0;j<e;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>arr4[i][j];    
        }
    }
      for(int i=0;i<e;i++)
    {
        for(int j=0;j<e;j++){
                cout<<arr4[i][j]<<"\t";    
        }
        cout<<endl;
    }    
    int sum4=0;
    for(int i=0;i<e;i++)
    {
        for(int j=0;j<e;j++){
            if(j==2){
                cout<<arr4[i][j]<<endl;
                sum4+=arr4[i][j];
            }
            
        }
        
    }
    cout<<"sum="<<sum4<<endl;


    // Find sum of both diagonals in matrix
    int f;
    cout<<"Enter the array's row & column:";
    cin>>f;

    int arr5[f][f];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<f;j++){
           cout << "a[" << i <<"][" << j <<"] = ";
            cin>>arr5[i][j];    
        }
    }
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<f;j++){
                cout<<arr5[i][j]<<"\t";    
        }
        cout<<endl;
    }
    
    int sum5=0;
    for(int i=0;i<f;i++)
    {
        
        for(int j=0;j<f;j++){
           if(i==j){
            sum5+=arr5[i][j];
           } 
           else if((i+j==2))
           {
             sum5+=arr5[i][j];
           }
        }
        
    }
    cout<<"sum="<<sum5<<endl;
    
   
}

