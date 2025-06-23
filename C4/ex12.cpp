#include <iostream>

using namespace std;

void print_max(int one, int sec)
{
	if (one > sec)
		cout << one << endl;
	else
		cout << sec << endl;
}

int main()
{
	int number_o;
	int number_s;

	cout << "inter a first mamber : ";
	cin >> number_o;

	cout << "inter a second number : ";
	cin >> number_s;

	print_max(number_s, number_o);
}
