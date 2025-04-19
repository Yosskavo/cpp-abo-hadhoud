#include <iostream>

using namespace std;

int main (void)
{
    int n1;
    int n2;

    cout << "enter the first number : " << endl;
    cin >> n1;
    cout << "enter the second number : " << endl;
    cin >> n2;
    cout << n1 << " = "  <<  n2 << " is " << (n1 == n2) << endl;
    cout << n1 << " != " <<  n2 << " is " << (n1 != n2) << endl;
    cout << n1 << " < "  <<  n2 << " is " << (n1 < n2)  << endl;
    cout << n1 << " > "  <<  n2 << " is " << (n1 > n2)  << endl;
    cout << n1 << " >= " <<  n2 << " is " << (n1 >= n2) << endl;
    cout << n1 << " <= " <<  n2 << " is " << (n1 <= n2) << endl;
}
