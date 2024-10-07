#include "coordinate.h"

Coordinate::Coordinate(): abcissa(0.0), ordinate(0.0){}

Coordinate::Coordinate(float x, float y): abcissa(x), ordinate(y){}

Coordinate::~Coordinate(){}

float Coordinate::Getabcissa()
{
    return abcissa;
}

void Coordinate::Setabcissa(float val)
{
    abcissa = val;
}

float Coordinate::Getordinate()
{
    return ordinate;
}

void Coordinate::Setordinate(float val)
{
    ordinate = val;
}

void Coordinate::display()
{
    cout << "Abcissa: " << Getabcissa() << ", Ordinate: " << Getordinate() << endl;
}

float Coordinate::getDistance()
{
    float x = Getabcissa();
    float y = Getordinate();
    return (sqrt((x*x) + (y*y)));
}

void Coordinate::move_x(float val)
{
    Setabcissa(Getabcissa() + val);
}

void Coordinate::move_y(float val)
{
    Setordinate(Getordinate() + val);
}

void Coordinate::move(float x_val, float y_val)
{
    move_x(x_val);
    move_y(y_val);
}

float Coordinate::operator-(Coordinate c)
{
    float x1 = Getabcissa();
    float y1 = Getordinate();

    float x2 = c.Getabcissa();
    float y2 = c.Getordinate();

    float x = x2 - x1;
    float y = y2 - y1;

    return (sqrt((x*x) + (y*y)));
}


bool Coordinate::operator>(Coordinate& c2)
{
    return (getDistance() > c2.getDistance());
}

bool Coordinate::operator>=(Coordinate& c2)
{
    return (getDistance() >= c2.getDistance());
}

bool Coordinate::operator<(Coordinate& c2)
{
    return (getDistance() < c2.getDistance());
}

bool Coordinate::operator<=(Coordinate& c2)
{
    return (getDistance() <= c2.getDistance());
}

bool Coordinate::operator==(Coordinate& c2)
{
    return (getDistance() == c2.getDistance());
}


