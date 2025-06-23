#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one, int sec)
{
	const float PI = 3.14;
	cout << PI * (pow(sec, 2) / 4.0) * ((2.0 * one - sec) / (2.0 * one + sec)) << endl;
}

int main()
{
	int a;
	int b;

	cout << "inter a first mamber : ";
	cin >> a;

	cout << "inter a second number : ";
	cin >> b;

	print_erea(a, b);
}
