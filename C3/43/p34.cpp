#include <iostream>

using namespace std;

int main (void)
{
    int totalsales;

    cout << "enter the totalsales : " << endl;
    cin >> totalsales;

    if (totalsales >= 1000000)
        cout << totalsales * 1.01 << "\n";
    else if (totalsales >= 500000)
        cout << totalsales * 1.02 << "\n";
    else if (totalsales >= 100000)
        cout << totalsales * 1.03 << "\n";
    else if (totalsales >= 50000)
        cout << totalsales * 1.05 << "\n";
    else
        cout << "0\n";
    return (0);
}