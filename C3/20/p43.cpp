#include <iostream>

using namespace std;

// its not good enough bc you need to learn about functions or math and i dont want to brock the study timeline

int main (void)
{
    int day;
    int hour;
    int min;
    int sec;

    cout << "seconds : \n";
    cin >> sec;

    day = sec / (60 * 60 * 24);
    sec  = sec % (60 * 60 * 24);
    hour = sec / (60 * 60);
    sec = sec % (60 * 60);
    min = sec / 60;
    sec = sec % 60;
    cout << day << ':' << hour << ':' << min << ':' << sec ;
    return (0);
}