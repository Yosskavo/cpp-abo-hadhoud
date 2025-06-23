#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one)
{
	const float PI = 3.14;

	cout << PI * pow(one, 2) << endl;
}

int main()
{
	int r;

	cout << "inter a first mamber : ";
	cin >> r;

	print_erea(r);
}
