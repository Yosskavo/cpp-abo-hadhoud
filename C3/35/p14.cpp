#include <iostream>

using namespace std;

void yo_swap(int &a, int &b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main (void)
{
    int a;
    int b;

    cout << "first number\n";
    cin >> a;
    cout << "second number\n";
    cin >> b;
    cout << "before swap numbers : " << a << " " << b;
    yo_swap(a, b);
    cout << "\nafter swap numbers : " << a << " " << b;

    return (0);
}