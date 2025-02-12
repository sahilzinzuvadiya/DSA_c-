#include <iostream>
using namespace std;
int main()
{
    //selection sort
    cout<<"Selection sort:";
    int arr[5]={5,12,20,6,4};
    for(int i=0;i<5-1;i++){
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    //linear search
    cout<<"Linear search:"<<endl;
    int arr1[5]={11,87,66,4,5};
    int target1,i;
    cout<<"Enter element to search=";
    cin>>target1;
    for(i=0;i<5;i++)
    {
        if(arr1[i]==target1)
        {
            cout<<"Element is found"<<endl;
            break;
        }
    }
    if(arr1[i]!=target1)
        {
            cout<<"Element is not found"<<endl;
           
        }
    cout<<endl;

    //binary search
    cout<<"Binary search:"<<endl;
    int arr2[6]={12,34,56,67,89,90};
    int left=0;
    int right=6-1;
    int target=124;
    bool check=false;
    cout<<"Enter element to search=";
    cin>>target;
    while (left<right)
    {
        int mid=(left+right)/2;
        if(arr2[mid]==target)
        {
           check=true;
           cout<<"Target found successfully"<<endl;
           break;
        }
        else if(arr2[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
        
    }
    if(check==0)
    {
         cout<<"Sorry, Target not found"<<endl;
    }
    
    return 0;
}