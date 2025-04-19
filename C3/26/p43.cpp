#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int day;
    int hour;
    int min;
    int sec;

    cout << "seconds : \n";
    cin >> sec;

    day = ceil(sec / (60 * 60 * 24));
    sec = ceil(sec % (60 * 60 * 24));
    hour= ceil(sec / (60 * 60));
    sec = ceil(sec % (60 * 60));
    min = ceil(sec / 60);
    sec = ceil(sec % 60);
    cout << day << ':' << hour << ':' << min << ':' << sec ;
    return (0);
}