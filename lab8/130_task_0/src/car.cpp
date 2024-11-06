#include "car.h"

Car::Car()
{
    //ctor
}

Car::~Car()
{
    //dtor
}

int Car::GetnumberOfPassengers()
{
    return numberOfPassengers;
}

void Car::SetnumberOfPassengers(int val)
{
    numberOfPassengers = val;
}
