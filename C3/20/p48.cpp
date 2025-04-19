#include <iostream>

using namespace std;

int main (void)
{
    int loanamount;
    int month;

    cout << "how much you wanna to earn ? \n";
    cin >> loanamount;
    cout << "how much you earn ? \n";
    cin >> month;
    cout << loanamount / month;
    return (0);
}