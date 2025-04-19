#include <iostream>

using namespace std;

void yo_is_hired(int age, bool drivelicense)
{
    if (age > 21 && drivelicense)
        cout << "Hired\n";
    else
        cout << "Rejected\n";
}

int main(void)
{
    int age;
    bool drivelicense;
    cout << "Enter your age : " << endl;
    cin >> age;
    cout << "do you have drive licence (yes=1, no=0): " << endl;
    cin >> drivelicense;
    yo_is_hired(age, drivelicense);
    return (0);
}