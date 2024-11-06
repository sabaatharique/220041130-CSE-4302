#include "petcat.h"

PetCat::PetCat(): Cat() {}

PetCat::PetCat(string n): petName(n), Cat(){}

PetCat:: getSound

void PetCat::makeSound()
{
    cout << GetpetName();
    Cat::makeSound();
}

PetCat::~PetCat() {}
