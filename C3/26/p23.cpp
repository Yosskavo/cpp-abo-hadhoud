#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int a;
    int b;
    int c;
    int p;
    const float PI = 3.14;

    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;
    cout << "thered number\n";
    cin >> c;
    p = (a + b + c) / 2;
    cout << round(PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));
    return (0);
}