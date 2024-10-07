#ifndef KELVIN_H
#define KELVIN_H

#include "celsius.h"
#include "fahrenheit.h"

#include <iostream>
using namespace std;

class Celsius;
class Fahrenheit;
class Kelvin
{
    public:
        Kelvin();

        double Getvalue();
        void Setvalue(double val);

        void assign (double val);

        void display ();

        void operator = (Celsius& C);
        void operator = (Fahrenheit& F);

    private:
        double value;
};

#endif // KELVIN_H
