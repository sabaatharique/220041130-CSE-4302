#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
    public:
        Employee();
        ~Employee();

        string GetemployeeName() const { return employeeName; }
        void SetemployeeName(string val) { employeeName = val; }

        int GetbirthDate() const { return birthDate; }
        void SetbirthDate(int val) { birthDate = val; }

        double Getsalary() const { return salary; }
        void Setsalary(double val) { salary = val; }

        void setInfo();
        void getInfo() const;

        Employee compareAge(Employee a, Employee b) const;

    private:
        string employeeName;
        int birthDate;
        double salary;
};

#endif // EMPLOYEE_H
