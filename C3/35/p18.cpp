#include <iostream>
#include <cmath>

using namespace std;

float yo_circal_area(int r)
{
    const float PI = 3.14;
    return (ceil(PI * pow(r, 2)));
}

int main (void) 
{
    int r;

    cout << "enter the r : " << endl;
    cin >> r;
    cout << yo_circal_area(r);
}