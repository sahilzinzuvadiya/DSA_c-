#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void factorial()
{
    int a, fac = 1;
    cout << "Enter a number=";
    cin >> a;
    for (int i = a; i >= 1; i--)
    {
        fac = fac * i;
    }
    cout << "factorial of number=" << fac<<endl;
}
void palindrome()
{
    int num, original, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
}
void address()
{
    int *p, s;
    cout << "Address of variable=" << &p << endl;
    cout << "Enter a value=";
    cin >> s;
    p = &s;
    cout << "value is=" << *p<<endl;
}
void swap()
{
    int x, y;
    cout << "Enter first number=";
    cin >> x;
    cout << "Enter second number=";
    cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After swapping value of x=" << x << endl;
    cout << "After swapping value of y=" << y<<endl;
}
void array()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements=";
        cin >> arr[i];
    }
    int largest = arr[0], smallest = arr[0];
    // int largest=0,smallest=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "largest element of array=" << largest << endl;
    cout << "smallest element of array=" << smallest<<endl;
}

void vec()
{
    vector<int> v1;
    int n, element;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> element;
        v1.push_back(element);
    }

    cout << "Elements in the vector:" << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    reverse(v1.begin(), v1.end()); 

    cout << "Elements after reversing:" << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " "<<endl;
    }
    cout << endl;

}

int main()
{
    factorial();
    palindrome();
    address();
    swap();
    array();
    vec();
    return 0;
}