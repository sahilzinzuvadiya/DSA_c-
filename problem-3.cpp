#include <iostream>
using namespace std;

int main() {
    //move all zero at end
    int arr[] = {0, 1, 0, 3, 12};
    int s = 5;

    int index = 0; 

    
    for (int i = 0; i < s; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    
    while (index < s) {
        arr[index] = 0;
        index++;
    }

    cout <<"Move all zero at end:";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //merge two array

    int arr1[6] = {1, 3, 5};  
    int arr2[] = {2, 4, 6};
    int m = 3, n = 3;

    int i = m - 1;      
    int j = n - 1;      
    int k = m + n - 1;  

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }

    cout <<"Merge two array:";
    for (int x = 0; x < m + n; x++) {
        cout << arr1[x] << " ";
    }

    return 0;
}


  

