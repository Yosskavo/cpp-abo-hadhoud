#include <iostream>

using namespace std;

void print_tell_n(int number)
{
	int i;

	i = 0;
	while (i < number)
	{
		cout << i + 1 << endl;
		i++;
	}
}

int main()
{
	int number;

	cout << "inter a number : ";
	cin >> number;
	print_tell_n(number);
}
