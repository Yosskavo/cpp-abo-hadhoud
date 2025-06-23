#include <iostream>

using namespace std;

void read_pin(void)
{
	const int password = 1234;
	int pin;

	do 
	{
		cout << "Please inter your password : ";
		cin >> pin;
	} while (password != pin);
}

void print_balance(void)
{
	cout << "Your balance is 7500\n";
}

int main ()
{
	read_pin();
	print_balance();
}