#include "celsius.h"


Celsius::Celsius() : value(0){}

double Celsius::Getvalue()
{
    return value;
}

void Celsius::Setvalue(double val)
{
    value = val;
}

void Celsius::assign(double val)
{
    if (val < -273.15)
        cout << "ERROR: VALUE UNDER ABSOLUTE ZERO." << endl;
    else
        Setvalue(val);
}

void Celsius::display()
{
    cout << "The temperature is: " << Getvalue() << " Celsius" << endl;
}

// convert from fahrenheit and store to celsius object
void Celsius::operator=(Fahrenheit& F)
{
    Setvalue((F.Getvalue() - 32) * 5/9);
}

void Celsius::operator=(Kelvin& K)
{
    Setvalue(K.Getvalue() - 273.15);
}

Celsius::operator Kelvin()
{

}



