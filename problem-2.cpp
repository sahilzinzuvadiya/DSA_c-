#include <iostream>
using namespace std;
int main()
{
    // find missing element
    int n;
    cout << "Array length is:";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    //int arr[5]={3,7,2,1,6};

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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    cout<<"Second largest element="<<arr[n-2];
    cout<<endl;

    //find missing number
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    
    int array[a - 1];
    cout << "Enter the " << a - 1 << " elements (from 1 to N): ";
    for (int i = 0; i < a - 1; i++) {
        cin >> array[i];
    }
    
    // Calculate the expected sum of numbers from 1 to N
    int expectedSum = a * (a + 1) / 2;
    
    // Calculate the sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < a - 1; i++) {
        actualSum += array[i];
    }
    
    // The missing number is the difference between expected and actual sum
    int missingNumber = expectedSum - actualSum;
    
    cout << "The missing number is: " << missingNumber << endl;

//rotate element
   int arr1[] = {1, 2, 3, 4, 5};
    int s = 5;
    int K;
    cout<<"Enter position:";
    cin>>K;
    

    // Step 1: Reverse the whole array
    int start = 0, end = s - 1;
    while (start < end) {
        int temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    }

    // Step 2: Reverse first K elements
    start = 0, end = K - 1;
    while (start < end) {
        int temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    }

    // Step 3: Reverse remaining elements
    start = K, end = s - 1;
    while (start < end) {
        int temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    }

    // Print rotated array
    cout << "Rotated Array: ";
    for (int i = 0; i < s; i++) {
        cout << arr1[i] << " ";
    }
    

    return 0;
 
}
