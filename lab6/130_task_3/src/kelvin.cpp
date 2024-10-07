#include "kelvin.h"

Kelvin::Kelvin(): value(0) {}


double Kelvin::Getvalue()
{
    return value;
}

void Kelvin::Setvalue(double val)
{
    value = val;
}

void Kelvin::assign(double val)
{
    if (val < 0)
        cout << "ERROR: VALUE UNDER ABSOLUTE ZERO." << endl;
    else
        Setvalue(val);
}

void Kelvin::display()
{
    cout << "The temperature is: " << Getvalue() << " Kelvin" << endl;
}

void Kelvin::operator=(Celsius& C)
{
    Setvalue(C.Getvalue() + 273.15);
}

void Kelvin::operator=(Fahrenheit& F)
{
    Setvalue(((F.Getvalue() * 9/5) + 32) + 273.15);
}


