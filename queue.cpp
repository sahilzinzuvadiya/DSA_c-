#include <iostream>
using namespace std;
class queue
{
    public:
        int capacity=4;
        int *arr= new int[capacity];
        int front=-1;
        int rear=-1;
        int a;
        int count=0;

    void push()
    {   
        if(rear==capacity-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        count++;
        cout<<"Enter elements:";
        cin>>a;
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
            arr[rear] = a;    
        }
        
        
        else
        {
            rear++;
            arr[rear] =a;
        }
    }
    void pop()
    {
        if(front==-1 && rear==-1)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else
        {
        cout<<"Enter poped element:"<<arr[front];
        front++;
        count--;
        cout<<endl;
        }
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        cout<<"Total count="<<count<<endl;
        cout<<endl;
    }
};    
int main()
{
    queue q1;

    //q1.pop();

    q1.push();
    q1.push();
    q1.push();
    q1.push();
    q1.push();

    q1.display();

    q1.pop();

    q1.display();

    return 0;

}