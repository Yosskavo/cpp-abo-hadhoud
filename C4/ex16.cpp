#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one, int sec)
{
	cout << one * sqrt(pow(sec, 2) - pow(one, 2)) << endl;
}

int main()
{
	int a;
	int d;

	cout << "inter a first mamber : ";
	cin >> a;

	cout << "inter a second number : ";
	cin >> d;

	print_erea(a, d);
}
