#include <iostream>
#include <cmath>

using namespace std;

float yo_circal_area(int l)
{
    const float PI = 3.14;

    return (floor(pow(l, 2) / (4 * PI)));
} 

int main (void) 
{
    int l;

    cout << "enter the l : " << endl;
    cin >> l;
    cout << yo_circal_area(l);
}