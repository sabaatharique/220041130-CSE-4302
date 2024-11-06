#include "employee.h"

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}

string Employee::Getname()
{
    return name;
}

void Employee::Setname(string val)
{
    name = val;
}

int Employee::Getid()
{
    return id;
}

void Employee::Setid(int val)
{
    id = val;
}
