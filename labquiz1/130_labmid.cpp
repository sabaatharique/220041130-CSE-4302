#include <iostream>
using namespace std;

class Car
{
private:
    string modelno;
    double price;

public:
    Car() : modelno(""), price(0.0) {};

    string getModelno()
    {
        return modelno;
    }
    void setModelno(string inputModelno)
    {
        modelno = inputModelno;
    }

    double getPrice()
    {
        return price;
    }
    void setPrice(double inputPrice)
    {
        price = inputPrice;
    }

    void display()
    {
        cout << "CAR MODEL: " << getModelno() << ", PRICE: " << getPrice() << endl;
    }
};

bool operator<=(Car c1, Car c2)
{
    return (c1.getPrice() <= c2.getPrice());
}

bool operator>=(Car c1, Car c2)
{
    return (c1.getPrice() >= c2.getPrice());
}

bool operator!=(Car c1, Car c2)
{
    return (c1.getPrice() != c2.getPrice());
}

void sortbyprice(Car arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                Car temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

string generateModelno()
{
    string modelno;
    int len = (rand() % 6) + 2;
    for (int i = 0; i < len; i++)
    {
        int r = rand() % 10;
        modelno += (r + '0');
    }
    return modelno;
}

double generatePrice()
{
    int price = (rand() % 600000);
    return (price / 100.0);
}

void takeInputByKeyboard(Car arr[], int size)
{
    string inputModelno;
    double inputPrice;
    for (int i = 0; i < size; i++)
    {
        cin >> inputModelno;
        cin >> inputPrice;
        cin.ignore();

        arr[i].setModelno(inputModelno);
        arr[i].setPrice(inputPrice);

        cout << i + 1 << ") ";
        arr[i].display();
    }
}

void generateRandom(Car arr[], int size)
{
    string randomModelno;
    double randomPrice;
    for (int i = 0; i < size; i++)
    {
        randomModelno = generateModelno();
        randomPrice = generatePrice();

        arr[i].setModelno(randomModelno);
        arr[i].setPrice(randomPrice);
        cout << i + 1 << ") ";
        arr[i].display();
    }
}

int main()
{
    srand(time(0));
    Car arr[10];

    int op;
    cout << "1 TO ENTER VIA KEYBOARD, 2 FOR RANDOM GENERATOR: ";
    cin >> op;

    if (op == 1)
        takeInputByKeyboard(arr, 10);
    else
        generateRandom(arr, 10);

    sortbyprice(arr, 10);
    cout << "SORTED:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ") ";
        arr[i].display();
    }

    return 0;
}