#include <iostream>

using namespace std;

int main (void)
{
    int a;
    int b;
    int c;
    int res;

    cout << "first mark\n";
    cin >> a;
    cout << "second mark\n";
    cin >> b;
    cout << "therd mark\n";
    cin >> c;
    res = (a + b + c) / 3;
    cout << res << endl;
    if (res >= 50)
        cout << "PASS\n";
    else
        cout << "Fail\n";
    return (0);
}