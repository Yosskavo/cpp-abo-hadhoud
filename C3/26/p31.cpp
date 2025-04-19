#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int a;

    cout << "first number\n";
    cin >> a;
    cout << round(pow(a, 2)) << endl;
    cout << round(pow(a, 3)) << endl;
    cout << round(pow(a, 4)) << endl;
    return (0);
}