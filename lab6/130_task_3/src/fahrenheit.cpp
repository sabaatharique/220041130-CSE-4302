#include "fahrenheit.h"

Fahrenheit::Fahrenheit() : value(0) {}

double Fahrenheit::Getvalue()
{
    return value;
}

void Fahrenheit::Setvalue(double val)
{
    value = val;
}

void Fahrenheit::assign(double val)
{
    if (val < -459.67)
        cout << "ERROR: VALUE UNDER ABSOLUTE ZERO." << endl;
    else
        Setvalue(val);
}

void Fahrenheit::display()
{
    cout << "The temperature is: " << Getvalue() << " Fahrenheit" << endl;
}

void Fahrenheit::operator=(Celsius& C)
{
    Setvalue((C.Getvalue() * 9/5) + 32);
}

void Fahrenheit::operator=(Kelvin& K)
{
    Setvalue(((K.Getvalue() - 273.15) * 9/5) + 32);
}






