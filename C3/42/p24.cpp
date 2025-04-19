#include <iostream>

using namespace std;

int main (void)
{
    int age;

    cout << "Please inter your mark\n";
    cin >> age;
    if (age >= 18 && age <= 45)
        cout << "Valid age\n";
    else 
        cout << "invalid age\n";
    return (0);
}