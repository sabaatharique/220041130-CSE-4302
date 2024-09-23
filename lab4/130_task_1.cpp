#include <iostream>
using namespace std;

class Calculator
{
private:
    int current;

    int getCurrent()
    {
        return current;
    }

    void setCurrent(int n)
    {
        current = n;
    }

public:
    Calculator() : current(0) {}

    Calculator(int n)
    {
        setCurrent(n);
    }

    ~Calculator()
    {
        cout << "Destructor of the Calculator object is called." << endl;
    }

    void add(int value)
    {
        setCurrent(getCurrent() + value);
    }

    void subtract(int value)
    {
        setCurrent(getCurrent() - value);
    }

    void multiply(int value)
    {
        setCurrent(getCurrent() * value);
    }

    int divideBy(int value)
    {
        if (value == 0)
        {
            cout << "Invalid arithmetic operation." << endl;
            return 0;
        }
        int rem = getCurrent() % value;
        setCurrent(getCurrent() / value);
        return rem;
    }

    void clear()
    {
        setCurrent(0);
    }

    void display()
    {
        cout << "CALCULATOR DISPLAY: " << getCurrent() << endl;
    }
};

int main()
{
    Calculator calc;

    calc.add(10);
    calc.display();

    calc.add(7);
    calc.display();

    calc.multiply(31);
    calc.display();

    calc.subtract(42);
    calc.display();

    calc.divideBy(7);
    calc.display();

    calc.divideBy(0);
    calc.display();

    calc.add(3);
    calc.display();

    calc.clear();
    calc.display();

    return 0;
}