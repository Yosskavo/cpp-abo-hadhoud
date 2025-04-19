#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int l;
    const float PI = 3.14;

    cout << "enter the l : " << endl;
    cin >> l;
    cout << floor(pow(l, 2) / (4 * PI));
}