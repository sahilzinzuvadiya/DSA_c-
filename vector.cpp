#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    int a;
    while (1)
    {
        cout << "Press 1 for Create" << endl;
        cout << "Press 2 for Insert" << endl;
        cout << "Press 3 for Update" << endl;
        cout << "Press 4 for Delete" << endl;
        cout << "press 0 to exit" << endl;
        cout << "Enter your choice:";
        cin >> a;

        switch (a)
        {
        case 1:
            for (int i = 0; i <= 4; i++)
            {
                int x;
                cout << "Enter element: ";
                cin >> x;
                v1.push_back(x);
            }
            for (int i = 0; i <= 4; i++)
            {
                cout << v1[i] << endl;
            }
            break;

        case 2:
            int a;
            cout << "Enter element to insert:";
            cin >> a;
            v1.push_back(a);
            for (int i = 0; i <= 5; i++)
            {
                cout << v1[i] << endl;
            }
            break;

        case 3:
            int pos, ins;
            cout << "Enter position:";
            cin >> pos;
            cout << "Enter element to insert:";
            cin >> ins;
            v1.insert(v1.begin() + pos, ins);
            for (int i = 0; i <= 4; i++)
            {
                cout << v1[i] << endl;
            }
            break;

        case 4:
            int s;
            cout << "Enter element index to delete:";
            cin >> s;
            v1.erase(v1.begin() + s);
            for (int i = 0; i <= 3; i++)
            {
                cout << v1[i] << endl;
            }
            break;

        case 0:
            exit(0);

        default:
            cout << "Invalid value";
        }
    }

    return 0;
}
