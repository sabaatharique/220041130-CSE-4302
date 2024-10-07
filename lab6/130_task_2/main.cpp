#include <iostream>
#include <ctime>
using namespace std;

#include "coordinate.h"

void randomAssignment(Coordinate c[], int size){
    for (int i = 0; i < size; i++) {
        float x = rand() % 20;
        float y = rand() % 20;
        c[i].Setabcissa(x);
        c[i].Setordinate(y);
    }
}

void sort(Coordinate c[], int size){
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size - 1; j++){
            if (c[j].getDistance() > c[j + 1].getDistance()) {
                Coordinate tmp;
                tmp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp;
            }
        }
    }
}

int main(){
    srand(time(0));

    Coordinate coord[10];

    randomAssignment(coord, 10);

    sort(coord, 10);

    for(int i = 0; i < 10; i++)
    {
        cout << i + 1 << ": ";
        coord[i].display();
    }

}


