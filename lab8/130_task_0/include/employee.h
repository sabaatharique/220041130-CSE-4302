#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;


class Employee
{
    public:
        Employee();
        ~Employee();

        string Getname();
        void Setname(string val);
        int Getid();
        void Setid(int val);

    protected:

    private:
        string name;
        int id;
};

#endif // EMPLOYEE_H
