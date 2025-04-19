#include <iostream>

using namespace std;

int main (void)
{
    int quarter;
    int penny;
    int dime;
    int nickel;
    int dollar;
    int res;

    cout << "how many Penny you have : \n";
    cin >> penny;
    cout << "how many Nickel you have : \n";
    cin >> nickel;
    cout << "how many Dime you have : \n";
    cin >> dime;
    cout << "how many Quarter you have : \n";
    cin >> quarter;
    cout << "how many Dollar you have : \n";
    cin >> dollar;
    res = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    cout << res << " Pennies\n";
    cout << res / 100.0 << " Dollars\n";
    return (0);
}