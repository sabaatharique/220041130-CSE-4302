#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal(string s);
        Animal(string name, string habitat, string s, int w, int h);
        ~Animal();

        string GetnameOfAnimal();
        void SetnameOfAnimal(string val);

        string GethabitatArea();
        void SethabitatArea(string val);

        string Getsound();
        void Setsound(string val);

        int Getweight();
        void Setweight(int val);

        int Getheight();
        void Setheight(int val);

        void displayInformation();

        void changeWeight(int val);

        void makeSound();

    private:
        string nameOfAnimal;
        string habitatArea;
        string sound;
        int weight;
        int height;
};

#endif // ANIMAL_H
