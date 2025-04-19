#include <iostream>
#include <cmath>

using namespace std;

int yo_ceil_mod(int a, int d)
{
    return (ceil(a % d));
}

int yo_ceil_div(int a, int d)
{
    return (ceil(a / d));
}

int main (void)
{
    int day;
    int hour;
    int min;
    int sec;

    cout << "seconds : \n";
    cin >> sec;

    day = yo_ceil_div(sec , (60 * 60 * 24));
    sec = yo_ceil_mod(sec , (60 * 60 * 24));
    hour= yo_ceil_div(sec , (60 * 60));
    sec = yo_ceil_mod(sec , (60 * 60));
    min = yo_ceil_div(sec , 60);
    sec = yo_ceil_mod(sec , 60);
    cout << day << ':' << hour << ':' << min << ':' << sec ;
    return (0);
}