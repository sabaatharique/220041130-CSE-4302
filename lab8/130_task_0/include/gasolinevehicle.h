#ifndef GASOLINEVEHICLE_H
#define GASOLINEVEHICLE_H

#include <iostream>
using namespace std;

#include <vehicle.h>


class GasolineVehicle : public Vehicle
{
    public:
        GasolineVehicle();
        ~GasolineVehicle();

        double GetfuelCapacity();
        void SetfuelCapacity(double val);

        string GetfuelType();
        void SetfuelType(string val);

    private:
        double fuelCapacity;
        string fuelType;
};

#endif // GASOLINEVEHICLE_H
