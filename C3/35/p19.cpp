#include <iostream>
#include <cmath>

using namespace std;

float yo_circal_area(int d)
{
    const float PI = 3.14;

    return (ceil((PI * pow(d, 2)) / 4));
}

int main (void) 
{
    int d;

    cout << "enter the d : " << endl;
    cin >> d;
    cout << yo_circal_area(d);
}