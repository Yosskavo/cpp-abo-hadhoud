#include <iostream>

using namespace std;

void yo_printname(string name)
{
    cout << "my name is " << name << endl;
}

int main (void)
{
    string name;

    cout << "Please enter your name : " << endl;
    getline(cin , name);
    yo_printname(name);
    return (0);
}