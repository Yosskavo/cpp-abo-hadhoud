#include <iostream>

using namespace std;

void yo_valid_age(int age)
{
    if (age >= 18 && age <= 45)
        cout << "Valid age\n";
    else 
        cout << "invalid age\n";
}

int main (void)
{
    int age;

    cout << "Please inter your mark\n";
    cin >> age;
    yo_valid_age(age);
    return (0);
}