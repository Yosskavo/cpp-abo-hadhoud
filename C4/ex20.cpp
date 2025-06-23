#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one)
{
	const float PI = 3.14;

	cout << PI * (pow(one, 2) / pow(2, 2)) << endl;
}

int main()
{
	int A;

	cout << "inter a first mamber : ";
	cin >> A;

	print_erea(A);
}
