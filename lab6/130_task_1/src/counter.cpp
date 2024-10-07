#include "counter.h"

Counter::Counter() : count(0), incrementStep(1){}

int Counter::Getcount()
{
    return count;
}

void Counter::Setcount(int val)
{
    count = val;
}

int Counter::GetincrementStep()
{
    return incrementStep;
}

void Counter::SetincrementStep(int step_val)
{
    if (Getcount() != 0) {
        cout << "COULD NOT SET INCREMENT VALUE" << endl;
        return;
    }
    if (step_val < 0) {
        cout << "CANNOT ASSIGN NEGATIVE VALUES" << endl;
        return;
    }
    incrementStep = step_val;
}

void Counter::resetCount(int step = 1)
{
    Setcount(0);
    SetincrementStep(step);
}

void Counter::increment()
{
    Setcount(Getcount() + GetincrementStep());
}

Counter Counter::operator + (Counter& c2) {
    if (GetincrementStep() == c2.GetincrementStep()){
        Counter c;
        c.SetincrementStep(GetincrementStep());
        c.Setcount(Getcount() + c2.Getcount());
        return c;
    }
    else {
        cout << "INCREMENTS STEPS NOT EQUAL" << endl;
    }
}

void Counter::operator += (Counter& c2) {
    Setcount(Getcount() + c2.Getcount());
    SetincrementStep(max(GetincrementStep(), c2.GetincrementStep()));
}

Counter Counter::operator ++ (){
    increment();
    return *this;
}

Counter Counter::operator ++ (int){
    increment();
    return *this;
}

bool Counter::operator > (Counter& c2) {
    return (Getcount() > c2.Getcount());
}


bool Counter::operator >= (Counter& c2){
    return (Getcount() >= c2.Getcount());
}

bool Counter::operator < (Counter& c2){
    return (Getcount() < c2.Getcount());
}

bool Counter::operator <= (Counter& c2) {
    return (Getcount() <= c2.Getcount());
}

bool Counter::operator == (Counter& c2) {
    return (Getcount() == c2.Getcount());
}






