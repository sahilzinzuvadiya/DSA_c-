#include <iostream>
using namespace std;
int main()
{
    int arr[5]={3,7,2,1,6};

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            int temp;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}