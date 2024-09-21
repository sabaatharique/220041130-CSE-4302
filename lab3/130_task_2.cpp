#include <iostream>
using namespace std;

class Temperature
{
private:
    float value;
    char unit;

public:
    void assign(float n, char u)
    {
        switch (u)
        {
        case 'C':
            if (n < -273.15)
                cout << "ERROR: VALUE UNDER ABSOLUTE ZERO." << endl;
            else
            {
                value = n,
                unit = u;
            }
            break;
        case 'F':
            if (n < -459.67)
                cout << "ERROR: VALUE UNDER ABSOLUTE ZERO." << endl;
            else
            {
                value = n,
                unit = u;
            }
            break;
        case 'k':
            if (n < 0)
                cout << "ERROR: VALUE UNDER ABSOLUTE ZERO." << endl;
            else
            {
                value = n,
                unit = u;
            }
            break;
        default:
            cout << "ERROR: UNIT NOT RECOGNISED." << endl;
            break;
        }
    }

    float convert(char c)
    {
        if (c == unit)
            return value;

        float res;
        switch (c)
        {
        case 'C':
            if (unit == 'F')
                res = 5 * (value - 32) / 9;
            else
                res = value + 273.15;
            break;
        case 'F':
            if (unit == 'C')
                res = (9 * value / 5) + 32;
            else
                res = (9 * (value + 273.15) / 5) + 32;
            break;
        case 'k':
            if (unit == 'C')
                res = value + 273.15;
            else
                res = (5 * (value - 32) / 9) + 273.15;
            break;
        default:
            cout << "ERROR: UNIT NOT RECOGNISED." << endl;
            return 0;
            break;
        }
        return res;
    }

    void print()
    {
        string unitString;
        if (unit == 'C')
            unitString = "Celsius";
        else if (unit == 'F')
            unitString = "Fahrenheit";
        else
            unitString = "Kelvin";
        cout << "The temperature is " << value << " " << unitString << "." << endl;
    }
};

int main()
{
    Temperature temp;
    temp.assign(-200, 'F');
    temp.print();
    cout << temp.convert('C');

    return 0;
}