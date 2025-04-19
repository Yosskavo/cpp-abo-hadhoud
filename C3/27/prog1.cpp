#include <iostream>

using namespace std;

struct s_info 
{
    int age;
    int salary;
    char gender;
    short wifes;
    string name;
    string city;
    string contry;
};


int main (void) 
{

    s_info info;

    cout << "What is your name ??\n";
    cin >> info.name;
    cout << "What is your age ??\n";
    cin >> info.age;
    cout << "What is your gender ??\n";
    cin >> info.gender;
    cout << "What is your contry ??\n";
    cin >> info.contry;
    cout << "What is your city ??\n";
    cin >> info.city;
    cout << "what is your monthly salary ??\n";
    cin >> info.salary;
    cout << "how many wifes you have ??\n";
    cin >> info.wifes;
	cout << "******************************" << endl;
	cout << "Name      : " << info.name   << endl;
	cout << "Age       : " << info.age    << endl;
	cout << "City      : " << info.city   << endl;
	cout << "Contry    : " << info.contry << endl;
    cout << "M salary  : " << info.salary << endl;
    cout << "Y salary  : " << info.salary * 12 << endl;
    cout << "Gender    : " << info.gender << endl;
    cout << "Married   : " << info.wifes << endl;
	cout << "******************************" << endl;
	return (0);
}
