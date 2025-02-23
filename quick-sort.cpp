#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;      
    int j = high;        
    // {70, 80, 10, 30, 90, 40, 50}
    while (i <= j) {
       
        while (arr[i] <= pivot) {
            i++;
        }

       
        while (arr[j] > pivot) {
            j--;
        }

       
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

   
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);      
        quicksort(arr, pivotIndex + 1, high);      
    }
}

int main() {
    vector<int> arr = {70, 80, 10, 30, 90, 40, 50};
    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    quicksort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}