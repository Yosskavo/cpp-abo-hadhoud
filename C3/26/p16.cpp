#include <iostream>
#include <cmath>

using namespace std;

int main (void) 
{
    int a;
    int d;

    cout << "enter th widght : " << endl;
    cin >> a;
    cout << "inter the diagnol : " << endl;
    cin >> d;
    cout << a * sqrt(pow(d, 2) - pow(a, 2));
}