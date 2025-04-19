#include <iostream>

using namespace std;

int main (void) 
{
    int age;
    int x;

    
    cout << "What is your age ??\n";
    cin >> age;
    cout << "after many years ??\n";
    cin >> x;
    cout << "After " << x << " years you will be " << x + age << " years old\n";
    return (0);
}