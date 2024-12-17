#include <iostream>
using namespace std;
main()
{
    // find negative number
    int a;
    cout << "Enter array size:";
    cin >> a;

    int arr[a];
    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "a[" << i << "]=";
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (0 > arr[i])
        {
            cout << "Negative elements from an Array:" << arr[i] << endl;
        }
    }

    // find largest number
    int x;
    cout << "Enter the array's row & column:";
    cin >> x;

    int arr1[x][x];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr1[i][j];
        }
    }
    int large = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (arr1[i][j] > large)
            {
                large = arr1[i][j];
            }
        }
    }
    cout << "Largest number:" << large <<endl;

    // find the transpose matrix
    int b;
    cout << "Enter the array's row & column:";
    cin >> b;

    int arr2[b][b];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {

            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    // print and find the sum of all elements of a given row & column
    int c, s;
    cout << "Enter the array's row & column:";
    cin >> c >> s;

    int arr3[c][s];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr3[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
    int row, sum = 0;
    cout << "Enter row number:";
    cin >> row;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == row)
            {
                cout << arr3[i][j] << "\t";
                sum += arr3[i][j];
            }
        }
    }
    cout << "sum of row=" << sum << endl;

    int col, sum1 = 0;
    cout << "Enter column number:";
    cin >> col;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (j == col)
            {
                cout << arr3[i][j] << "\t";
                cout << endl;
                sum1 += arr3[i][j];
            }
        }
    }
    cout << "sum of column=" << sum1;
}