#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accNumber;
    string holderName;
    bool savings;
    int currentBalance;
    const int minimumBalance;
    int interestRate;
    static int totalCreated, totalPresent, totalSourceTax;

public:
    BankAccount(int min) : accNumber(0), currentBalance(0), interestRate(3), minimumBalance(min)
    {
        totalCreated++;
        totalPresent++;
    }

    ~BankAccount()
    {
        cout << "ACCOUNT OF " << holderName << ", ACCOUNT NUMBER " << accNumber << ", DESTROYED WITH A BALANCE OF " << currentBalance << endl;
        totalPresent--;
    }

    static int getTotalCreated()
    {
        return totalCreated;
    }

    static int getTotalPresent()
    {
        return totalPresent;
    }

    static int getTotalSourceTax()
    {
        return totalSourceTax;
    }

    int getBalance() const
    {
        return currentBalance;
    }

    void setBalance(int value)
    {
        currentBalance = value;
    }

    void setBankDetails(int acnum, string hldrname, bool svngs, int crntbal)
    {
        accNumber = acnum;
        holderName = hldrname;
        savings = svngs;
        currentBalance = crntbal;
    }

    void setInterestRate(int value)
    {
        interestRate = value;
    }

    void showBankDetails()
    {
        cout << "ACCOUNT NUMBER: " << accNumber << endl;
        cout << "ACCOUNT HOLDER: " << holderName << endl;
        cout << "ACCOUNT TYPE: ";
        if (savings)
            cout << "SAVINGS" << endl;
        else
            cout << "CURRENT" << endl;
        cout << "CURRENT BALANCE: " << currentBalance << endl;
        cout << "MINIMUM BALANCE: " << minimumBalance << endl;
    }

    void showBalance()
    {
        cout << "ACCOUNT BALANCE IS: " << currentBalance << endl;
    }

    void deposit(int value)
    {
        if (value < 0)
            cout << "INVALID OPERATION" << endl;
        else
            setBalance(value + currentBalance);
    }

    void withdraw(int value)
    {
        if (value < 0 || value > currentBalance)
            cout << "INVALID OPERATION" << endl;
        else
            setBalance(currentBalance - value);
    }

    void giveInterest()
    {
        int dep = (interestRate * currentBalance) / 100;
        totalSourceTax += (dep) / 10;
        deposit(9 * dep / 10);
    }
};

int BankAccount::totalCreated = 0;
int BankAccount::totalPresent = 0;
int BankAccount::totalSourceTax = 0;

void display_stat()
{
    cout << "TOTAL CREATED: " << BankAccount::getTotalCreated() << endl;
    cout << "TOTAL PRESENT: " << BankAccount::getTotalPresent() << endl;
    cout << "TOTAL SOURCE TAX: " << BankAccount::getTotalSourceTax() << endl;
}

BankAccount Larger(const BankAccount A, const BankAccount B)
{
    if (A.getBalance() > B.getBalance())
        return A;
    return B;
}

int main()
{
    BankAccount acc1(100);
    acc1.showBankDetails();
    acc1.setBankDetails(3423, "SABA ATHARIQUE", true, 2390);
    acc1.giveInterest();
    acc1.showBankDetails();

    display_stat();

    return 0;
}