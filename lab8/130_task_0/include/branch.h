#ifndef BRANCH_H
#define BRANCH_H

#include <iostream>
using namespace std;

#include <motorcycles.h>
#include <car.h>
#include <truck.h>
#include <electricvehicle.h>
#include <hybridvehicle.h>
#include <manager.h>
#include <driver.h>

class Branch
{
    public:
        Branch();
        ~Branch();

        void introduceEmployees();

        void checkTruckCargo();
        void checkCarPassengers();

    protected:

    private:
        Motorcycles m[10];
        Car c[10];
        Truck t[10];
        ElectricVehicle e[10];
        HybridVehicle h[10];

        Manager man[10];
        Driver driv[30];
};

#endif // BRANCH_H
