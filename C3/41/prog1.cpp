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
    s_info info[2];
    
    info[0].age    = 2147483647;
    info[0].name   = "yosskavo";
    info[0].gender = 'X';
    info[0].contry = "Hadono";
    info[0].city   = "light romando";
    info[0].salary = -2147;
    info[0].wifes  = 255;
    
    info[1].age    = 15;
    info[1].name   = "ALI";
    info[1].gender = 'p';
    info[1].contry = "adono";
    info[1].city   = "cerom";
    info[1].salary = 5466454;
    info[1].wifes  = 46545;
    yo_info_card(info[0]);
    yo_info_card(info[1]);
	return (0);
}
