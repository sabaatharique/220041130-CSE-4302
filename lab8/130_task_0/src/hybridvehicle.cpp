#include "hybridvehicle.h"

HybridVehicle::HybridVehicle()
{
    //ctor
}

HybridVehicle::~HybridVehicle()
{
    //dtor
}

double HybridVehicle::GetregenerationEfficiency()
{
    return regenerationEfficiency;
}

void HybridVehicle::SetregenerationEfficiency(double val)
{
    regenerationEfficiency = val;
}
