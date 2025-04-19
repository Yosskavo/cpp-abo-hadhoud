#include <iostream>

using namespace std;

int main (void)
{
    int l;
    const float PI = 3.14;

    cout << "diameter : \n";
    cin >> l;
    cout << (l * l)/(PI * 4);
    return (0);
}