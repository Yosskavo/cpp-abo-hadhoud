#include <iostream>

using namespace std;

int main (void)
{
    int password;
    const int pass = 1234;
    cout << "Please inter your password\n";
    cin >> password;
    if (password == pass)
        cout << "Your Balance is 7500\n";
    else 
        cout << "Wrong Password\n";
    return (0);
}