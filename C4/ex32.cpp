#include <iostream>

using namespace std;

void print_tell_n(int number, int power)
{
	int res;

	res = 1;
	while (power)
	{
		res *= number; 
		power--;
	}
	cout << res << endl;
}

int main()
{
	int number;
	int power;

	cout << "inter a number : ";
	cin >> number;

	cout << "inter a pwoer : ";
	cin >> power;

	print_tell_n(number, power);
}
