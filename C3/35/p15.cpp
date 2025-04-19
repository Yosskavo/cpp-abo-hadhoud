#include <iostream>

using namespace std;

int yo_mult(int a, int b)
{
    return (a * b);
}

int main (void)
{
    int a;
    int b;

    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;
    cout << yo_mult(a, b);
    return (0);
}