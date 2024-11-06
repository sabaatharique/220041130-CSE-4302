#ifndef CAT_H
#define CAT_H

#include <animal.h>


class Cat : private Animal
{
    public:
        Cat();
        Cat(string name, string habitat, int w, int h);
        ~Cat();

        void displayInformation();

        void makeSound();

    private:
};

#endif // CAT_H
