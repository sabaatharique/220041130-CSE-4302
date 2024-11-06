#include "branch.h"

Branch::Branch()
{
    //ctor
}

Branch::~Branch()
{
    //dtor
}

void Branch::introduceEmployees()
{
    for(int i = 0; i < 10; i++) {
        cout << "Mr. " << man[i].Getname() << endl;
    }

    for(int i = 0; i < 30; i++) {
        cout<< driv[i].Getname() << endl;
    }
}
void Branch::checkTruckCargo()
{
    cout << "TRUCK - MAINTENANCE" << endl;
    for(int i = 0; i < 10; i++) {
        cout << t[i].GetcargoCapacity() << endl;
    }
}

void Branch::checkCarPassengers()
{
    cout << "CAR - MAINTENANCE" << endl;
    for(int i = 0; i < 10; i++) {
        cout << c[i].GetnumberOfPassengers() << endl;
    }
}


