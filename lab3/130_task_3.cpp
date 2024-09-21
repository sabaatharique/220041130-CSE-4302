#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time() : hour(0), minute(0), second(0) {}

    int hours()
    {
        return hour;
    }

    int minutes()
    {
        return minute;
    }

    int seconds()
    {
        return second;
    }

    void reset(int h, int m, int s)
    {
        hour = h % 24;
        minute = m % 60;
        second = s % 60;
    }

    void advance(int h, int m, int s)
    {
        int sec = second + s;
        second = sec % 60;

        int min = minute + m + (sec / 60);
        minute = min % 60;

        int hr = hour + h + (min / 60);
        hour = hr % 24;
    }

    void print()
    {
        cout << "The time is " << hour << ":" << minute << ":" << second << "." << endl;
    }
};

int main()
{
    Time time;

    time.print();
    time.reset(23, 58, 43);
    time.print();
    time.advance(1, 40, 38);
    time.print();
    time.reset(0, 0, 0);
    time.print();

    return 0;
}