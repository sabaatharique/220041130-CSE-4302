#include "electricvehicle.h"

ElectricVehicle::ElectricVehicle()
{
    //ctor
}

ElectricVehicle::~ElectricVehicle()
{
    //dtor
}

int ElectricVehicle::GetchargingTime()
{
    return chargingTime;
}

void ElectricVehicle::SetchargingTime(int val)
{
    chargingTime = val;
}
