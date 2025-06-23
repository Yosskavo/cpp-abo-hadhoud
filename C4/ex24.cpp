#include <iostream>

using namespace std;

void print_resault(int number)
{
	if (number >= 18 && number <= 45)
		cout << "Valid age\n";
	else
		cout << "Invalid age\n";
}

int main()
{
	int age;

	cout << "how old are you : ";
	cin >> age; 
	print_resault(age);
}
