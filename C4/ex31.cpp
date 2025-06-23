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

	cout << "inter a number : ";
	cin >> number;

	print_tell_n(number, 2);
	print_tell_n(number, 3);
	print_tell_n(number, 4);

}
