#include <iostream>
#include <cmath>

using namespace std;

int yo_pow_m(int a, int m)
{
    return (round(pow(a, m)));
}

int main (void)
{
    int a;
    int m;

    cout << "first number\n";
    cin >> a;
    cout << "the power \n";
    cin >> m;
    cout << yo_pow_m(a, m) << endl;
    return (0);
}