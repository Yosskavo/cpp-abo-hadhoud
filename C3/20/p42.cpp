#include <iostream>

using namespace std;

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
    cout << (((day * 24 + hour) * 60 + min) * 60) + sec << " Seconds\n";
    return (0);
}