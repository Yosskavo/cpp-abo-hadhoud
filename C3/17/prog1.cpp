#include <iostream>

using namespace std;

int main (void) 
{
    int age;
    int salary;
    char gender;
    short wifes;
    string name;
    string city;
    string contry;
    
    age = 2147483647;
    name = "yosskavo";
    gender = 'X';
    contry = "Hadono";
    city = "light romando";
    salary = -2147;
    wifes = 255;
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
