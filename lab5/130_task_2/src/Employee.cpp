#include "Employee.h"

void Employee::setInfo()
{
    cout << "ENTER NAME: ";
    string name;
    getline(cin, name);
    SetemployeeName(name);

    cout << "ENTER BIRTH YEAR: ";
    int year;
    cin >> year;
    SetbirthDate(year);

    cout << "ENTER SALARY: ";
    double salary;
    cin >> salary;
    Setsalary(year);
}

void Employee::getInfo() const
{
    cout << "NAME :" << GetemployeeName() << endl;
    cout << "BIRTH YEAR :" << GetbirthDate() << endl;
    cout << "SALARY :" << Getsalary() << endl;
}

Employee Employee::compareAge(Employee a, Employee b) const
{
    if(a.GetbirthDate() > b.GetbirthDate())
        return a;
    return b;
}






