#include <iostream>

using namespace std;

int main (void)
{
    int mark;

    cout << "Please inter your mark\n";
    cin >> mark;
    if (mark >= 50)
        cout << "PASS\n";
    else 
        cout << "Fail\n";
}