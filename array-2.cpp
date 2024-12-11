#include <iostream>
using namespace std;
main()
{
  // print array
    int a;
    cout<<"Enter array size:";
    cin>>a;

    int b[a],i;
    cout << "Enter array elements:" << endl;
    for(i=0;i<a;i++){
    cout << "a[" << i << "] = ";
    cin>>b[i];
    }
    for(i=0;i<a;i++){
      cout<<b[i]<<endl;
    }

  // sum of all element
   int x;
   cout<<"Enter array size:";
   cin>>x;

  int c[x],j,sum=0;
  cout << "Enter array elements:" << endl;
  for(j=0;j<x;j++){
  cout << "a[" << j << "] = ";
  cin>>c[j];
  }
  for(j=0;j<x;j++){
    sum=sum+c[j];
  }

  cout<<"sum="<<sum<<endl;

  // find sum of all elements which are present at even indexes
   int size;
   cout<<"Enter array size:";
   cin>>size;

  int arr[size],q,total=0;
  cout<<"Enter array elements:"<<endl;
  for( q=0;q<size;q++)
  {
    cout << "a[" << q << "] = ";
    cin>>arr[q];
  }
  for(q=0;q<size;q++){
    if(q%2==0 && q!=0){
      total=total+arr[q];
    }
  }
  cout<<"total="<<total<<endl;

  // find the maximum and minimum values
  int k;
  cout << "Enter array size:";
  cin >> k;

  int array[k], m;
  cout << "Enter array elements:" << endl;
  for (m = 0; m < k; m++)
  {
    cout << "a[" << m << "] = ";
    cin >> array[m];
  }
  int max = array[0], min = array[0];
  for (m = 0; m < k; m++)
  {
    if (array[m] > max)
    {
      max = array[m];
    }
  }
    for (m = 0; m < k; m++)
    {
      if (array[m]<min)
      {
        min = array[m];
      }
    }
    cout << "maximum number is" << max << endl;
    cout << "minimum number is" << min;
  
}