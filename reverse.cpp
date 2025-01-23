#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    // int pos;
    node *head = NULL;
    node *ptr = NULL;

    head = new node();
    cout << "Enter Data for node-1:";
    cin >> head->data;
    head->next = NULL;

    ptr = new node();
    cout << "Enter Data for node-2:";
    cin >> ptr->data;
    ptr->next = NULL;
    head->next = ptr;

    ptr = new node();
    cout << "Enter Data for node-3:";
    cin >> ptr->data;
    ptr->next = NULL;
    head->next->next = ptr;

    ptr = new node();
    cout << "Enter Data for node-4:";
    cin >> ptr->data;
    ptr->next = NULL;
    head->next->next->next = ptr;

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
    node *current=NULL;
    node *prev=NULL;
    node *next=NULL;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    cout<<"After reverse:";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}