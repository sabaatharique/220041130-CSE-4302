#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
#include <cmath>
using namespace std;

class Coordinate
{
    public:
        Coordinate();
        Coordinate(float x, float y);
        ~Coordinate();

        float Getabcissa();
        void Setabcissa(float val);

        float Getordinate();
        void Setordinate(float val);

        void display();

        float getDistance();
        void move_x(float val);
        void move_y(float val);
        void move(float x_val, float y_val);

        float operator - (Coordinate c);

        bool operator > (Coordinate& c2);
        bool operator >= (Coordinate& c2);
        bool operator < (Coordinate& c2);
        bool operator <= (Coordinate& c2);
        bool operator == (Coordinate& c2);

    private:
        float abcissa;
        float ordinate;
};

#endif // COORDINATE_H
