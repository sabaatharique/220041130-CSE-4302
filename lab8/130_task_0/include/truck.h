#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
using namespace std;

#include <gasolinevehicle.h>


class Truck : public GasolineVehicle
{
    public:
        Truck();
        ~Truck();

        double GetcargoCapacity();
        void SetcargoCapacity(double val);

    protected:

    private:
        double cargoCapacity;
};

#endif // TRUCK_H
