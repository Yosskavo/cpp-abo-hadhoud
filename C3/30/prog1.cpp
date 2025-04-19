#include <iostream>

using namespace std;

int main (void)
{
    string st1;
    int n1;
    double n2;
    float n3;

    st1 = "43.22";
    n1 = 20;
    n2 = 33.5;
    n3 = 55.23;
    cout << "original : " << st1 << " to double " << stod(st1) << " to float ";
    cout << stof(st1) << " to int " << stoi(st1) << endl;
    cout << "original : " << n1 << " to string " << to_string(n1) << endl;
    cout << "original : " << n2 << " to string " << to_string(n2) << endl;
    cout << "original : " << n3 << " to string " << to_string(n3);
    cout << " to integer " << (int)n3 << endl;
    return (0);
}