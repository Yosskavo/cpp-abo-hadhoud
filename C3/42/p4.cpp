#include <iostream>

using namespace std;

int main(void)
{
    int age;
    bool drivelicense;
    cout << "Enter your age : " << endl;
    cin >> age;
    cout << "do you have drive licence (yes=1, no=0): " << endl;
    cin >> drivelicense;

    if (age > 21 && drivelicense)
        cout << "Hired\n";
    else
        cout << "Rejected\n";
    return (0);
}