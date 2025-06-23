#include <iostream>

using namespace std;

void print_resault(int age, string driver_license)
{
	if (age > 21 && driver_license == "yes")
		cout << "Hired\n";
	else
		cout << "Rejected\n";
}

int main()
{
	int age;
	string driver_license;

	cout << "how old are you : ";
	cin >> age;
	
	cout << "do you have a driver license [yes/no]: ";
	cin >> driver_license;
	
	print_resault(age, driver_license);
}
