#ifndef HYBRIDVEHICLE_H
#define HYBRIDVEHICLE_H

#include <iostream>
using namespace std;

#include <gasolinevehicle.h>
#include <electricvehicle.h>

class HybridVehicle : public GasolineVehicle, public ElectricVehicle
{
    public:
        HybridVehicle();
        ~HybridVehicle();

        double GetregenerationEfficiency();
        void SetregenerationEfficiency(double val);

    protected:

    private:
        double regenerationEfficiency;
};

#endif // HYBRIDVEHICLE_H
