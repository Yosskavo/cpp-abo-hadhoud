#include <iostream>

using namespace std;

void yo_is_pass(int mark)
{
    if (mark >= 50)
        cout << "PASS\n";
    else 
        cout << "Fail\n";
}

int main (void)
{
    int mark;

    cout << "Please inter your mark\n";
    cin >> mark;
    yo_is_pass(mark);
    return (0);
}