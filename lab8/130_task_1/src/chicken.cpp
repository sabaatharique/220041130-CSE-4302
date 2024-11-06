#include "chicken.h"

Chicken::Chicken() : Animal("buck buck") {}

Chicken::Chicken(string name, string habitat, int w, int h) : Animal(name, habitat, "buck buck", w, h){}

Chicken::~Chicken() {}

int Chicken::GetdailyEggCount()
{
    return dailyEggCount;
}

void Chicken::SetdailyEggCount(int val)
{
    dailyEggCount = val;
}

void Chicken::makeSound()
{
    cout << "The chicken says: " << Animal::makeSound() << endl;
}

void Chicken::displayInformation()
{
    cout << "Name: " << GetnameOfAnimal() << endl;
    cout << "Habitat: " << GethabitatArea() << endl;
    cout << "Height: " << Getheight() << endl;
    cout << "Weight: " << Getweight() << endl;
    cout << "Sound: " << Getsound() << endl;
}
