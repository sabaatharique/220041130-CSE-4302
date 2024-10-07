#include <iostream>
using namespace std;

#include "celsius.h"
#include "fahrenheit.h"
#include "kelvin.h"

int main()
{

    Celsius c;
    c.assign(100);
    Kelvin k;
    k = c;
    Fahrenheit f;
    f = c;

    c.display();
    f.display();
    k.display();

    return 0;
}
