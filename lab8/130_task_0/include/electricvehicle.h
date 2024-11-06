#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H

#include <iostream>
using namespace std;

#include <vehicle.h>


class ElectricVehicle : public Vehicle
{
    public:
        ElectricVehicle();
        ~ElectricVehicle();

        int GetchargingTime();
        void SetchargingTime(int val);

    protected:

    private:
        int chargingTime;
};

#endif // ELECTRICVEHICLE_H
