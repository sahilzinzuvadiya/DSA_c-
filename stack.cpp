#include <iostream>
using namespace std;
class stack
{
public:
    int *arr = new int[capacity];
    int top = -1;
    int capacity = 4;
    int count = 0;

    // void setdata()
    // {

    // }
    void push()
    {
        if (count < capacity)
        {
            top++;
            cout << "Enter elements=";
            cin >> arr[top];
            count++;
        }
        else
        {
            cout << "stack is full"<<endl;
        }
    }
    void pop()
    {
        if (count > 0)
        {
            top--;
            count--;
        }
        else
        {
            cout << "stack is empty"<<endl;
        }
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " "<<endl;
        }
        cout << "Total count=" << count;
    }
};
int main()
{
    stack s1;

    // s1.setdata();
    
    s1.push();

    s1.push();

    s1.pop();

    s1.push();

    s1.pop();

    s1.push();

    s1.push();

    s1.display();

    return 0;
}