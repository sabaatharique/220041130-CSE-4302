#include <iostream>
using namespace std;

enum employeeType
{
    labourer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

int main()
{
    char input;
    employeeType type;

    cout << "Enter employee type (first letter only)\n{laborer, secretary, manager, accountant, executive, researcher}: ";
    cin >> input;

    switch (input)
    {
    case 'l':
        type = labourer;
        break;
    case 's':
        type = secretary;
        break;
    case 'm':
        type = manager;
        break;
    case 'a':
        type = accountant;
        break;
    case 'e':
        type = executive;
        break;
    case 'r':
        type = researcher;
        break;
    default:
        break;
    }

    string emp;
    switch (type)
    {
    case labourer:
        emp = "labourer";
        break;
    case secretary:
        emp = "secretary";
        break;
    case manager:
        emp = "manager";
        break;
    case accountant:
        emp = "accountant";
        break;
    case executive:
        emp = "executive";
        break;
    case researcher:
        emp = "researcher";
        break;
    default:
        break;
    }
    cout << "Employee type is: " << emp << endl;

    return 0;
}