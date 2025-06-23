#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one)
{
	const float PI = 3.14;

	cout << (PI * pow(one, 2)) / 4 << endl;
}

int main()
{
	int d;

	cout << "inter a first mamber : ";
	cin >> d;

	print_erea(d);
}
