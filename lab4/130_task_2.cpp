#include <iostream>
using namespace std;

class Flight
{
private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;

    double CalFuel()
    {
        if (distance <= 1000)
            return 500;
        else if (distance > 1000 && distance <= 2000)
            return 1100;
        else
            return 2200;
    }

public:
    void FeedInfo()
    {
        cout << "ENTER FLIGHT NUMBER: ";
        cin >> flightNumber;

        cout << "ENTER DESTINATION: ";
        cin >> destination;

        cout << "ENTER DISTANCE: ";
        cin >> distance;

        cout << "ENTER MAX FUEL CAPACITY: ";
        cin >> maxFuelCapacity;
    }

    void ShowInfo()
    {
        cout << "FLIGHT DETAILS" << endl;
        cout << "FLIGHT NUMBER: " << flightNumber << endl;
        cout << "FLIGHT DESTINATION: " << destination << endl;
        cout << "FLIGHT DISTANCE: " << distance << endl;
        cout << "FLIGHT MAXIMUM FUEL CAPACITY: " << maxFuelCapacity << endl;

        if (CalFuel() > maxFuelCapacity)
            cout << "INSUFFICIENT FUEL" << endl;
        else
            cout << "SUFFICIENT FUEL" << endl;
    }
};

int main()
{
    Flight f;

    f.FeedInfo();
    f.ShowInfo();

    return 0;
}