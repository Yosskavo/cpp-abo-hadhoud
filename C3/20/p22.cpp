#include <iostream>

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

    cout << PI * (b * b / 4.0) * ((2.0 * a - b) / (2.0 * a + b));
    return (0);
}