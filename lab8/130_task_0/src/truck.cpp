#include "truck.h"

Truck::Truck()
{
    //ctor
}

Truck::~Truck()
{
    //dtor
}

double Truck::GetcargoCapacity()
{
    return cargoCapacity;
}

void Truck::SetcargoCapacity(double val)
{
    cargoCapacity = val;
}
