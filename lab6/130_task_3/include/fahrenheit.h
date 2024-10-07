#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

#include "celsius.h"
#include "kelvin.h"

#include <iostream>
using namespace std;

class Celsius;
class Kelvin;
class Fahrenheit
{
    public:
        Fahrenheit();

        double Getvalue();
        void Setvalue(double val);

        void assign (double val);

        void display ();

        void operator = (Celsius& C);
        void operator = (Kelvin& K);

    private:
        double value;
};

#endif // FAHRENHEIT_H
