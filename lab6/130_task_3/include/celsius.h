#ifndef CELSIUS_H
#define CELSIUS_H

#include "fahrenheit.h"
#include "kelvin.h"

#include <iostream>
using namespace std;

class Fahrenheit;
class Kelvin;
class Celsius
{
    public:
        Celsius();

        double Getvalue();
        void Setvalue(double val);

        void assign (double val);

        void display ();

        operator Kelvin();

        void operator = (Fahrenheit& F);
        void operator = (Kelvin& K);

    private:
        double value;
};

#endif // CELSIUS_H
