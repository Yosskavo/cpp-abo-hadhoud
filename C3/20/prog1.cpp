#include <iostream>

using namespace std;

int main (void)
{
    int a;
    int b;

    cout << "Please enter the first Number A\n";
    cin >> a;
    cout << "Please enter the first Number B\n";
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;
    return (0);
}