#include "gasolinevehicle.h"

GasolineVehicle::GasolineVehicle()
{
    //ctor
}

GasolineVehicle::~GasolineVehicle()
{
    //dtor
}

double GasolineVehicle::GetfuelCapacity() {
    return fuelCapacity;
}

void GasolineVehicle::SetfuelCapacity(double val) {
    fuelCapacity = val;
}

string GasolineVehicle::GetfuelType() {
    return fuelType;
}

void GasolineVehicle::SetfuelType(string val) {
    fuelType = val;
}
