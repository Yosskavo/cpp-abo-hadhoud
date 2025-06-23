#include <iostream>

using namespace std;

void print_tell_n(int number)
{
	while (0 < number)
	{
		cout << number << endl;
		number--;
	}
}

int main()
{
	int number;

	cout << "inter a number : ";
	cin >> number;
	print_tell_n(number);
}
