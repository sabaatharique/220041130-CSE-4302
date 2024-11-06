#ifndef CHICKEN_H
#define CHICKEN_H

#include <animal.h>


class Chicken : protected Animal
{
    public:
        Chicken();
        Chicken(string name, string habitat, int w, int h);
        ~Chicken();

        int GetdailyEggCount();
        void SetdailyEggCount(int val);

        void makeSound();

        void displayInformation();

    private:
        int dailyEggCount;
};

#endif // CHICKEN_H
