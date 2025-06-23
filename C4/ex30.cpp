#include <iostream>

using namespace std;

void print_factorial(int number)
{
	int res;
	res = 1;
	while (0 < number)
	{
		res *= number;
		number--;
	}
	cout << res << endl;
}

int main()
{
	int number;

	cout << "inter a number : ";
	cin >> number;
	print_factorial(number);
}
