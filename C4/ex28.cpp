#include <iostream>

using namespace std;

void print_tell_n(int number)
{
	int res;
	res = 0;
	while (0 < number)
	{
		if (number % 2 != 0)
			res += number;
		number--;
	}
	cout << res << endl;
}

int main()
{
	int number;

	cout << "inter a number : ";
	cin >> number;
	print_tell_n(number);
}
