#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
using namespace std;

class Counter
{
    public:
        Counter();

        int Getcount();
        void Setcount(int val);

        int GetincrementStep();
        void SetincrementStep(int step_val);

        void resetCount (int step);

        void increment();

        Counter operator + (Counter& c2);
        void operator += (Counter& c2);

        Counter operator ++ ();
        Counter operator ++ (int);

        bool operator > (Counter& c2);
        bool operator >= (Counter& c2);
        bool operator < (Counter& c2);
        bool operator <= (Counter& c2);
        bool operator == (Counter& c2);

    private:
        int count;
        int incrementStep;
};

#endif // COUNTER_H
