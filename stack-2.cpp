

#include <iostream>
using namespace std;
class stack
{
public:
    int *arr = new int[capacity];
    int top = -1;
    int capacity = 4;
    int count = 0;

    void push()
    {
        if (count ==capacity)
        {
            cout << "stack is full"<<endl;
        }
        else
        {
            top++;
            cout << "Enter elements=";
            cin >> arr[top];
            count++;
        }
        cout<<endl;
    }
    void pop()
    {
        if (count > 0)
        {
            cout << "Popped element: " << arr[top] << endl;
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
        cout<<endl;
    }
    void peek()
    {
        if(top==-1){
            cout<<"stack is empty";

        }
        else{
            cout<<"Top element is:"<<arr[top]<<endl;
        }
    }
    void size()
    {
        cout<<"stack size is:"<<count<<endl;
    }
};
int main()
{
    stack s1;

    s1.push();
    s1.push();
    s1.push();
    s1.push();
    s1.push();

    s1.display();

    s1.peek();

    s1.size();

    s1.pop();
    s1.display();
    s1.size();
    return 0;
}