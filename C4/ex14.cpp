#include <iostream>

using namespace std;

void swap_number(int &one, int &sec)
{
	int tmp;

	tmp = one;
	one = sec;
	sec = tmp;
}

int main()
{
	int number_o;
	int number_s;

	cout << "inter a first mamber : ";
	cin >> number_o;

	cout << "inter a second number : ";
	cin >> number_s;

	cout << "before swap : " << number_o << " " << number_s << endl;
	swap_number(number_s, number_o);
	cout << "before swap : " << number_o << " " << number_s << endl;
}
