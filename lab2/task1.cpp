#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    char slash;

    cout << "ENTER THE FIRST FRACTION: ";
    cin >> a >> slash >> b;

    cout << "ENTER THE SECOND FRACTION: ";
    cin >> c >> slash >> d;

    int numerator = (a * d) + (b * c);
    int denominator = b * d;

    cout << "SUM = " << numerator << "/" << denominator << endl;

    return 0;
}