#include <iostream>

using namespace std;

void yo_change(int &a, int &b)
{
    a = 13;
    b = 37;
}

int main (void)
{
    int a;
    int b;

    cout << "enter the number 1\n";
    cin >> a;
    cout << "enter the number 1\n";
    cin >> b;
    cout << "before the change " << a << " " << b << endl;
    yo_change(a, b);
    cout << "after the change " << a << " " << b << endl;
    return (0);
}