#include "animal.h"

Animal::Animal(string s = "") : nameOfAnimal(""), habitatArea(""), sound(s), weight(0), height(0) {}

Animal::Animal(string name, string habitat, string s, int w, int h): nameOfAnimal(name), habitatArea(habitat), sound(s), weight(w), height(h){};

Animal::~Animal(){}

string Animal::GetnameOfAnimal() { return nameOfAnimal; }

void Animal::SetnameOfAnimal(string val) { nameOfAnimal = val; }

string Animal::GethabitatArea() { return habitatArea; }

void Animal::SethabitatArea(string val) { habitatArea = val; }

string Animal::Getsound() { return sound; }

void Animal::Setsound(string val) { sound = val; }

int Animal::Getweight() { return weight; }

void Animal::Setweight(int val) { weight = val; }

int Animal::Getheight() { return height; }

void Animal::Setheight(int val) { height = val; }

void Animal::displayInformation()
{
    cout << "Name: " << GetnameOfAnimal() << endl;
    cout << "Habitat: " << GethabitatArea() << endl;
    cout << "Height: " << Getheight() << endl;
    cout << "Weight: " << Getweight() << endl;
    cout << "Sound: " << Getsound() << endl;
}

void Animal::changeWeight(int val)
{
    Setweight(val);
}

void Animal::makeSound()
{
    cout << Getsound();
}


