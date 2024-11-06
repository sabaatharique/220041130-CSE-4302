#include "cat.h"

Cat::Cat() : Animal("meow") {}

Cat::Cat(string name, string habitat, int w, int h) : Animal(name, habitat, "meow", w, h){}


Cat::~Cat() {}

void Cat::makeSound()
{
    cout << "The cat says: ";
    Animal::makeSound();
    cout << << endl;
}

void Cat::displayInformation()
{
    cout << "Name: " << GetnameOfAnimal() << endl;
    cout << "Habitat: " << GethabitatArea() << endl;
    cout << "Height: " << Getheight() << endl;
    cout << "Weight: " << Getweight() << endl;
    cout << "Sound: " << Getsound() << endl;
}
