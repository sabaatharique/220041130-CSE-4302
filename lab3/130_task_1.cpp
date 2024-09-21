#include <iostream>
using namespace std;

class Counter
{
private:
    int count;
    int increase;

public:
    Counter() : count(0), increase(0) {}

    void setIncrementStep(int num)
    {
        increase = num;
    }

    int getCount()
    {
        return count;
    }

    void increment()
    {
        count += increase;
    }

    void resetCount()
    {
        count = 0;
    }
};

int main()
{
    Counter ctr;

    cout << ctr.getCount() << endl;
    ctr.setIncrementStep(5);
    ctr.increment();
    cout << ctr.getCount() << endl;
    ctr.increment();
    ctr.increment();
    cout << ctr.getCount() << endl;
    ctr.setIncrementStep(3);
    ctr.increment();
    cout << ctr.getCount() << endl;
    ctr.resetCount();
    cout << ctr.getCount() << endl;

    return 0;
}