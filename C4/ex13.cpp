#include <iostream>

using namespace std;

void print_max(int one, int sec, int thi)
{
	if (one > sec && one > thi)
		cout << one << endl;
	else if (sec > thi)
		cout << sec << endl;
	else
		cout << thi << endl;
}

int main()
{
	int number_o;
	int number_s;
	int number_t;

	cout << "inter a first mamber : ";
	cin >> number_o;

	cout << "inter a second number : ";
	cin >> number_s;

	cout << "inter a second number : ";
	cin >> number_t;

	print_max(number_s, number_o, number_t);
}
