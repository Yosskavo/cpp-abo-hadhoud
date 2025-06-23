#include <iostream>

using namespace std;

void print_full_name(string f_name, string s_name)
{
	cout << f_name << " " << s_name << endl;
}

int main()
{
	string f_name;
	string l_name;

	cout << "inter your first name : ";
	cin >> f_name; 

	cout << "inter your last name : ";
	cin >> l_name; 

	print_full_name(f_name, l_name);
}
