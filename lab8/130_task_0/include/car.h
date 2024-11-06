#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

#include <gasolinevehicle.h>


class Car : public GasolineVehicle
{
    public:
        Car();
        ~Car();

        int GetnumberOfPassengers();
        void SetnumberOfPassengers(int val);

    protected:

    private:
        int numberOfPassengers;
};

#endif // CAR_H
