#include <iostream>

using namespace std;

void print_half(int number)
{
	cout << "half of " << number << " is " << number / 2 << endl; 
}

int main()
{
	int number;

	cout << "inter a number : ";
	cin >> number;

	print_half(number);
}
