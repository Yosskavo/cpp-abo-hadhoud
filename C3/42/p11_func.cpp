#include <iostream>

using namespace std;

void yo_is_passed(int a, int b, int c)
{
    int res;

    res = (a + b + c) / 3;
    cout << res << endl;
    if (res >= 50)
        cout << "PASS\n";
    else
        cout << "Fail\n";
}

int main (void)
{
    int a;
    int b;
    int c;

    cout << "first mark\n";
    cin >> a;
    cout << "second mark\n";
    cin >> b;
    cout << "therd mark\n";
    cin >> c;
    yo_is_passed(a, b, c);
    return (0);
}