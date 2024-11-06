#include "vehicle.h"

Vehicle::Vehicle(){}

Vehicle::~Vehicle() {}

string Vehicle::GetlicensePlate() {
    return licensePlate;
}

void Vehicle::SetlicensePlate(string val) {
    licensePlate = val;
}

string Vehicle::Getmanufacturer() {
    return manufacturer;
}

void Vehicle::Setmanufacturer(string val) {
    manufacturer = val;
}

int Vehicle::GetcarriageSizeLimit() {
    return carriageSizeLimit;
}

void Vehicle::SetcarriageSizeLimit(int val) {
    carriageSizeLimit = val;
}
