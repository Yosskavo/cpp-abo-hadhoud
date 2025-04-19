#include <iostream>
#include <cmath>

using namespace std;

int yo_pow(int a, int m)
{
    return (round(pow(a, 2)));
}

int main (void)
{
    int a;

    cout << "first number\n";
    cin >> a;
    cout << yo_pow(a, 2) << endl;
    cout << yo_pow(a, 3) << endl;
    cout << yo_pow(a, 4) << endl;
    return (0);
}