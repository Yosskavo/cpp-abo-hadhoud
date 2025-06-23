#include <iostream>

using namespace std;

void valid_age(void)
{
	int age;

	age = 0;
	while (age < 18 || age > 45)
	{
		cout << "Please inter your age : ";
		cin >> age;
		if (age < 18 || age > 45)
			cout << "Invalid Age\n";
	}
	cout << "Valid age\n";
}

int main()
{

	valid_age();
}
