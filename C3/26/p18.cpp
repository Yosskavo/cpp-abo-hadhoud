#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int r;
    const float PI = 3.14;

    cout << "enter the r : " << endl;
    cin >> r;
    cout << ceil(PI * pow(r, 2));
}