#ifndef PETCAT_H
#define PETCAT_H

#include <cat.h>


class PetCat : public Cat
{
    public:
        PetCat();
        PetCat(string n);
        ~PetCat();

        string GetpetName() { return petName; }
        void SetpetName(string val) { petName = val; }

        void makeSound();

    private:
        string petName;
};

#endif // PETCAT_H
