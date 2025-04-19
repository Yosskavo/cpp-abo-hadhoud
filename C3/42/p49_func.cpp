#include <iostream>

using namespace std;

void yo_valid_pass(int password)
{
    const int pass = 1234;

    if (password == pass)
        cout << "Your Balance is 7500\n";
    else 
        cout << "Wrong Password\n";
}

int main (void)
{
    int password;

    cout << "Please inter your password\n";
    cin >> password;
    return (0);
}