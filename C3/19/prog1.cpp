#include <iostream>

using namespace std;

int main (void) 
{
    short age;
    int salary;
    char gender;
    short wifes;
    string name;
    string city;
    string contry;
    
    cout << "What is your name ??\n";
    cin >> name;
    cout << "What is your age ??\n";
    cin >> age;
    cout << "What is your gender ??\n";
    cin >> gender;
    cout << "What is your contry ??\n";
    cin >> contry;
    cout << "What is your city ??\n";
    cin >> city;
    cout << "what is your monthly salary ??\n";
    cin >> salary;
    cout << "how many wifes you have ??\n";
    cin >> wifes;
	cout << "******************************" << endl;
	cout << "Name      : " << name   << endl;
	cout << "Age       : " << age    << endl;
	cout << "City      : " << city   << endl;
	cout << "Contry    : " << contry << endl;
    cout << "M salary  : " << salary << endl;
    cout << "Y salary  : " << salary * 12 << endl;
    cout << "Gender    : " << gender << endl;
    cout << "Married   : " << wifes << endl;
	cout << "******************************" << endl;
	return (0);
}
