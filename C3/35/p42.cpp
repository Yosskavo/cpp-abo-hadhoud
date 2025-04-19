#include <iostream>
#include <cmath>

using namespace std;

int yo_all_to_sec(int day, int hour, int min)
{
    return (((day * 24 + hour) * 60 + min) * 60);
}

int main (void)
{
    int day;
    int hour;
    int min;
    int sec;

    cout << "days : \n";
    cin >> day;
    cout << "hours : \n";
    cin >> hour;
    cout << "minutes : \n";
    cin >> min;
    cout << "seconds : \n";
    cin >> sec;
    cout << round(yo_all_to_sec(day, hour, min) + sec) << " Seconds\n";
    return (0);
}