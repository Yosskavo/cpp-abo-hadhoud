#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int d;
    const float PI = 3.14;

    cout << "enter the d : " << endl;
    cin >> d;
    cout << ceil((PI * pow(d, 2)) / 4);
}