#include <iostream>

using namespace std;

void print_even_or_odd(int number)
{
	if (number % 2 == 0)
		cout << "Even\n";
	else
		cout << "Odd\n";
}

int main()
{
	int number;

	cout << "inter a mamber : ";
	cin >> number; 
	print_even_or_odd(number);
}
