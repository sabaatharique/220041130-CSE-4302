#ifndef COW_H
#define COW_H

#include <animal.h>


class Cow : public Animal
{
    public:
        Cow();
        Cow(string name, string habitat, int w, int h);
        ~Cow();

        double GetmilkProductionInLiters();
        void SetmilkProductionInLiters(double val);

        void makeSound();

    private:
        double milkProductionInLiters;
        string sound;
};

#endif // COW_H
