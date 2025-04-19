#include <iostream>

using namespace std;

int main (void)
{
    int totalbill;
    int cashpaid;

    cout << "the total bill ? \n";
    cin >> totalbill;
    cout << "how much the client paid ? \n";
    cin >> cashpaid;
    cout << totalbill - cashpaid;
    return (0);
}