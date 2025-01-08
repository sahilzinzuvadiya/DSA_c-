#include <iostream>
using namespace std;
class Bank_account
{
protected:
    // int accountNumber;
    // int accountholdername;
    int balance = 0;
    int with;
    int dep;

public:
    void deposite()
    {
        cout << "Enter deposite amount=";
        cin >> dep;
        // cout << endl;
        balance = balance + dep;
    }
    void withdraw()
    {
        cout << "Enter withdraw amount=";
        cin >> with;
        // cout << endl;

        if (balance < with)
        {
            cout << "unavailable balance" << endl;
        }

        else
        {
            cout << "withdraw success" << endl;

            balance = balance - with;
        }
    }
    void getBalance()
    {
        cout << "current balance is=" << balance;
        cout << endl;
    }
    void displayAccountInfo()
    {
        cout << "deposite amount=" << dep << endl;
        cout << "withdraw amount=" << with << endl;
        cout << "current balance=" << balance << endl;
        cout << endl;
    }
};

class SavingAccount : public Bank_account
{
private:
    float interestrate, days, percentage;

public:
    void calculateinterest()
    {
        cout << "SIMPLE INTEREST" << endl;
        getBalance();
        // cout << balance << endl;
        cout << "Enter percentage(in %):";
        cin >> percentage;
        cout << "Enter days:";
        cin >> days;
        interestrate = (balance * percentage * days) / (100 * 365);
        cout << "interestrate=" << interestrate << endl;
        cout << endl;
    }
};
class CheckingAccount : public Bank_account
{
private:
    int overdraftlimit;

public:
    void checkoverdraft()
    {
        cout << "CHECKING OVERDRAFT SYSTEM" << endl;
        getBalance();
        cout << "Enter overdraft amount=";
        cin >> overdraftlimit;
        if (balance < overdraftlimit)
        {
            cout << "overdraft pass" << endl;
        }
        cout << endl;
    }
};
class FixeddepositeAccount : public Bank_account
{
private:
    float term, days, percentage;

public:
    void calculateinterest()
    {
        cout << "FIXEDEPOSITE INTEREST" << endl;
        getBalance();
        // cout<<balance;
        cout << "Enter percentage(in %):";
        cin >> percentage;
        cout << "Enter days:";
        cin >> days;
        term = (balance * percentage * days) / (100 * 365);
        cout << "interestrate=" << term << endl;
    }
};

int main()
{
    Bank_account t1;
    SavingAccount s1;
    CheckingAccount c1;
    FixeddepositeAccount f1;
    s1.deposite();
    s1.withdraw();
    s1.getBalance();
    s1.displayAccountInfo();
    s1.calculateinterest();

    c1.deposite();
    c1.withdraw();
    c1.getBalance();
    c1.displayAccountInfo();
    c1.checkoverdraft();

    f1.deposite();
    f1.withdraw();
    f1.getBalance();
    f1.displayAccountInfo();
    f1.calculateinterest();
    return 0;
}
