#include <iostream>
using namespace std;

int func(int &par1, char &par2)
{
    par1++;
    return par1;
}

int main()
{
    int a = 5;
    char bb = 'b';
    cout << func(a, bb) << endl;
    cout << a << endl;
    return 0;
}