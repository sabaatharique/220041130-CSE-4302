#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle
{
    public:
        Vehicle();
        ~Vehicle();

        string GetlicensePlate();
        void SetlicensePlate(string val);

        string Getmanufacturer();
        void Setmanufacturer(string val);

        int GetcarriageSizeLimit();
        void SetcarriageSizeLimit(int val);

    protected:

    private:
        string licensePlate;
        string manufacturer;
        int carriageSizeLimit;
};

#endif // VEHICLE_H
