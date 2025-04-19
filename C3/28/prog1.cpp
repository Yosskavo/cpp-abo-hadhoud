#include <iostream>

using namespace std;

enum e_color 
{
    red ,
    blue
};

enum e_status 
{
    singal ,
    maried
};

enum e_gender 
{
    male,
    female,
};
struct s_info 
{
    int age;
    int salary;
    string name;
    string city;
    string contry;
};


int main (void) 
{

    s_info info;
    e_color color;
    e_status status;
    e_gender gender;

    status = e_status::singal;
    gender = e_gender::male;
    color = e_color::blue;
    cout << "What is your name ??\n";
    cin >> info.name;
    cout << "What is your age ??\n";
    cin >> info.age;
    cout << "What is your contry ??\n";
    cin >> info.contry;
    cout << "What is your city ??\n";
    cin >> info.city;
    cout << "what is your monthly salary ??\n";
    cin >> info.salary;
	cout << "*******************************************" << endl;
	cout << "Name                         : " << info.name   << endl;
	cout << "Age                          : " << info.age    << endl;
	cout << "City                         : " << info.city   << endl;
	cout << "Contry                       : " << info.contry << endl;
    cout << "M salary                     : " << info.salary << endl;
    cout << "Y salary                     : " << info.salary * 12 << endl;
    cout << "Gender    (male=0, female=1) : " << gender << endl;
    cout << "Married   (singl=0, maried=1): " << status << endl;
    cout << "color     (red=0, blue=1)    : " << color << endl;
	cout << "*********************************************" << endl;
	return (0);
}
