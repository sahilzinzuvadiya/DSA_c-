
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // find prime number
    int a, i, flag = 0;

    cout << "Enter number: ";
    cin >> a;

    if (a < 2) {
        cout << a << " is not a prime number" << endl;
    }
    else
    {
        for (i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << a << " is a prime number" << endl;
        else
            cout << a << " is not a prime number" << endl;
    }

    // find vowels in string
    int vowels = 0;
    char str[100];
    cout << "Enter String:";
    cin >> str;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }
    cout << "Vowels in enterd string is=" << vowels;
    cout<<endl;

//reverse a string
      string x;

    cout << "Please enter string:";
    cin >> x;
    int s;
    for(s = 0; s < x.length(); s++){
        cout << x.at(s);
    }
    cout<<endl;
    for(s = x.length()-1; s > -1; s--){
        cout << x.at(s);
    }
return 0;


}
