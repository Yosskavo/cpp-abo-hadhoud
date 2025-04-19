#include <iostream>

using namespace std;

int main (void)
{
    int a;
    const float PI = 3.14;

    cout << "diameter : \n";
    cin >> a;
    cout << (a * a ) / (2 * 2) * PI ;
    return (0);
}