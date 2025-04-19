#include <iostream>
#include <cmath>

using namespace std;

float yo_circal_area(int a)
{
    const float PI = 3.14;

    return (ceil((PI * pow(a / 2, 2))));
}

int main (void) 
{
    int a;

    cout << "enter the a : " << endl;
    cin >> a;
    cout << yo_circal_area(a);
}