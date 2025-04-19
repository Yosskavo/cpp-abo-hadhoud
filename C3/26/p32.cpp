#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int a;
    int m;

    cout << "first number\n";
    cin >> a;
    cout << "the power \n";
    cin >> m;
    cout << round(pow(a, m)) << endl;
    return (0);
}