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
    int pos;
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
    cout << endl;

    // for update
    cout << "Enter position:";
    cin >> pos;
    ptr = head;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }
    cout << "Enter Data for update:";
    cin >> ptr->data;

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    // for delete first node
    cout << "First node delete" << endl;
    cout << "Enter position:";
    cin >> pos;
    ptr = head;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }
    head = head->next;
    delete ptr;
    ptr = NULL;

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    // for delete last node
    cout << "Last node delete" << endl;
    cout << "Enter position:";
    cin >> pos;
    ptr = head;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }
    ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    delete ptr->next;
    ptr->next = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    // for delete middel node
    node *previous;
    cout << "Node delete in middel" << endl;
    cout << "Enter position:";
    cin >> pos;
    ptr = head;
    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
    }
    previous = head;
    for (int i = 0; i < pos - 1; i++)
    {
        previous = previous->next;
    }
    previous->next = ptr->next;
    delete ptr;
    ptr = NULL;

    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}