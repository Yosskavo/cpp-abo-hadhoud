#include <iostream>

using namespace std;

int main (void)
{
    int mark;

    cout << "enter the mark : " << endl;
    cin >> mark;

    if (mark >= 90)
        cout << "A\n";
    else if (mark >= 80)
        cout << "B\n";
    else if (mark >= 70)
        cout << "C\n";
    else if (mark >= 60)
        cout << "D\n";
    else if (mark >= 50)
        cout << "E\n";
    else
        cout << "F\n";
    return (0);
}