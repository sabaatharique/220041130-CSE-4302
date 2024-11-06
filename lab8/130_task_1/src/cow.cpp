#include "cow.h"

Cow::Cow() : Animal("moo") {}

Cow::Cow(string name, string habitat, int w, int h) : Animal(name, habitat, "moo", w, h){}

Cow::~Cow() {}

double Cow::GetmilkProductionInLiters()
{
        return milkProductionInLiters;
}

void Cow::SetmilkProductionInLiters(double val)
{
    milkProductionInLiters = val;
}

void Cow::makeSound()
{
    cout << "The cow says: ";
    Animal::makeSound();
    cout << endl;
}
