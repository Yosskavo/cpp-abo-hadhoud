#include <iostream>

using namespace std;

int main (void)
{
    int a;
    int b;
    int tmp;

    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;

    cout << "before swap numbers : " << a << " " << b;
    tmp = a;
    a = b;
    b = tmp;
    cout << "\nafter swap numbers : " << a << " " << b;

    return (0);
}