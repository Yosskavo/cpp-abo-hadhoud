#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string name;
    string a;
    string b;

    cout << "Please enter string ? " << endl;
    getline(cin, name);
    cout << "Please enter string 1" << endl;
    cin >> a;
    cout << "Please enter string 2" << endl;
    cin >> b;
    cout << "************************************************" << endl;
    cout << "The lenght of string 1 is " << name.length() << endl;
    cout << "characters at 0, 2. 4, 7 : " << name[0] << " " << name[2];
    cout << " " << name[4] << " " << name[7] << endl;
    cout << "Convert srirng2 and string3 = " << a + b << endl;
    cout << stoi(a) * stoi(b);
}