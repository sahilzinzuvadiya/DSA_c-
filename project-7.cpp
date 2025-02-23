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
    node *head = NULL;
    node *ptr = NULL;
    int c;

    while (1)
    {
        cout << "1. Create node\n";
        cout << "2. Update node\n";
        cout << "3. Read node\n";
        cout << "4. Delete node\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> c;

        switch (c)
        {
        case 1:

            head = new node();
            cout << "Enter Data for node-1: ";
            cin >> head->data;
            head->next = NULL;

            ptr = new node();
            cout << "Enter Data for node-2: ";
            cin >> ptr->data;
            ptr->next = NULL;
            head->next = ptr;

            ptr = new node();
            cout << "Enter Data for node-3: ";
            cin >> ptr->data;
            ptr->next = NULL;
            head->next->next = ptr;

            ptr = new node();
            cout << "Enter Data for node-4: ";
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
            break;

        case 2:

            int pos;
            cout << "Enter position to update: ";
            cin >> pos;

            ptr = head;
            for (int i = 0; i < pos; i++)
            {
                if (ptr == NULL)
                {
                    cout << "Invalid position!" << endl;
                    break;
                }
                ptr = ptr->next;
            }

            if (ptr != NULL)
            {
                cout << "Enter new data for position " << pos << ": ";
                cin >> ptr->data;
            }

            ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl;
            break;

        case 3:

            cout << "Linked list data: ";
            ptr = head;
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl;
            break;

        case 4:

            cout << "Enter position to delete: ";
            cin >> pos;

            if (head == NULL)
            {
                cout << "List is empty!" << endl;
                break;
            }

            ptr = head;
            if (pos == 0)
            {

                head = head->next;
                delete ptr;
            }
            else
            {
                node *previous = NULL;
                for (int i = 0; i < pos; i++)
                {
                    if (ptr == NULL)
                    {
                        cout << "Invalid position!" << endl;
                        break;
                    }
                    previous = ptr;
                    ptr = ptr->next;
                }

                if (ptr != NULL)
                {
                    previous->next = ptr->next;
                    delete ptr;
                }
            }

            ptr = head;
            cout << "Updated linked list: ";
            while (ptr != NULL)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl;
            break;

        case 5:
            exit(0);

        default:
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
