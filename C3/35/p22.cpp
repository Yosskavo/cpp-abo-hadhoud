#include <iostream>
#include <cmath>

using namespace std;

float yo_circal_area(int a, int b)
{
    const float PI = 3.14;

    return (floor(PI * (pow(b, 2) / 4.0) * ((2.0 * a - b) / (2.0 * a + b))));
}

int main (void)
{
    int a;
    int b;

    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;
    cout << yo_circal_area(a, b);
    return (0);
}