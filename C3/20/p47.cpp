#include <iostream>

using namespace std;

int main (void)
{
    int loanamount;
    int monthlypayment;

    cout << "how much you wanna to earn ? \n";
    cin >> loanamount;
    cout << "how much you earn ? \n";
    cin >> monthlypayment;
    cout << loanamount / monthlypayment << " Months";
    return (0);
}