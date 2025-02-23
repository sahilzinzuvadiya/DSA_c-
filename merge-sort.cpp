#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
   
   cout << endl << "merge called " << left << mid << right << endl;
   int i = left;
   int j = mid + 1;

   vector<int> temp;
   while (i <= mid && j <= right)
   {

      if (arr[i] <= arr[j])
      {
         temp.push_back(arr[i]);

         i++;
      }
      else
      {
         temp.push_back(arr[j]);
         j++;
      }
   }

   while (i <= mid)
   {
      temp.push_back(arr[i]);
      i++;
   }

   while (j <= right)
   {
      temp.push_back(arr[j]);
      j++;
   }

   for (int i = 0; i < temp.size(); i++)
   {
      cout << "left: " << left << " i: " << i << " left+i: " << left + i << endl;
      arr[left + i] = temp[i];
   }
}

void mergeSort(vector<int> &arr, int left, int right)
{

   if (left >= right)
   {
      return;
   }

   int mid = left + (right - left) / 2;
   cout  << endl << "merge sort called with left" << left << "  right: "  << right << endl;
   mergeSort(arr, left, mid);
cout  << endl << "merge sort called with right" << right <<  " left: " <<left << endl;
   mergeSort(arr, mid + 1, right);

   merge(arr, left, mid, right);
}

main()
{

   vector<int> arr = {38, 27, 43, 3, 9, 82, 10};


   int n = 7;
 
  cout<< "Before Sorting" << endl;
     for(int i=0; i<arr.size(); i++){
         cout << arr[i] << " ";
      }

      cout << endl;
   mergeSort(arr, 0, n - 1);


   cout<< "After Sorting" << endl;

   for(int i=0; i<arr.size(); i++){
      cout << arr[i] << " ";
   }
}