#include <iostream>
using namespace std;

#include "counter.h"

int main()
{
    Counter c1, c2, c3;

    c1.Setcount(5);
    //c1.SetincrementStep(-3);
    cout << c1.Getcount() << " " << c1.GetincrementStep() << endl;

    c2.Setcount(2);
    cout << c2.Getcount() << " " << c2.GetincrementStep() << endl;

    c3 = c1 + c2;
    cout << c3.Getcount() << " " << c2.GetincrementStep() << endl;

    return 0;
}
