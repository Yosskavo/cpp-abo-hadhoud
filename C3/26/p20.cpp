#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int a;
    const float PI = 3.14;

    cout << "enter the a : " << endl;
    cin >> a;
    cout << ceil((PI * pow(a / 2, 2)));
}