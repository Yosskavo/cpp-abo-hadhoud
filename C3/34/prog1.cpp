#include <iostream>

using namespace std;

void yo_processer(int a, int b)
{
    cout << "the result (processer) : " << a + b << endl;
}

int yo_function(int a, int b)
{
    return (a + b);
}

int main (void)
{
    int a;
    int b;

    cout << "Please enter Number 1\n";
    cin >> a;
    cout << "Please enter Number 1\n";
    cin >> b;

    yo_processer(a, b);
    cout << "the sum (function) : " << yo_function(a, b) << endl;
}