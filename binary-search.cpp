#include <iostream>
using namespace std;
int main()
{
    int arr[6]={12,34,56,67,89,90};
    int left=0;
    int right=6-1;
    int target=124;
    bool check=false;
    cout<<"Enter element to search=";
    cin>>target;
    while (left<right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        {
           check=true;
           cout<<"Target found successfully";
           break;
        }
        else if(arr[mid]<target)
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
         cout<<"Sorry, Target not found";
    }
    
    
    return 0;
}