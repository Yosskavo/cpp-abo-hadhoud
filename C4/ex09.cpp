#include <iostream>

using namespace std;

void print_sum(int one, int sec, int thi)
{
	cout << one + sec + thi << endl;
}

int main()
{
	int number_one;
	int number_sec;
	int number_thi;


	cout << "inter first number : ";
	cin >> number_one;

	cout << "inter second number : ";
	cin >> number_sec;

	cout << "inter third number : ";
	cin >> number_thi;

	print_sum(number_one, number_sec, number_thi);
}
