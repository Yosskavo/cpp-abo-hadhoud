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

void yo_info_card(s_info info)
{
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
}

int main (void) 
{
    s_info info;
    
    info.age = 2147483647;
    info.name = "yosskavo";
    info.gender = 'X';
    info.contry = "Hadono";
    info.city = "light romando";
    info.salary = -2147;
    info.wifes = 255;
    yo_info_card(info);
	return (0);
}
