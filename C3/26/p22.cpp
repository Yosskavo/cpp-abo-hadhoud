#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int a;
    int b;
    const float PI = 3.14;

    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;
    cout << floor(PI * (pow(b, 2) / 4.0) * ((2.0 * a - b) / (2.0 * a + b)));
    return (0);
}