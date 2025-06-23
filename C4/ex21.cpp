#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one)
{
	const float PI = 3.14;

	cout << pow(one, 2) / (PI * 4) << endl;
}

int main()
{
	int l;

	cout << "inter a first mamber : ";
	cin >> l;

	print_erea(l);
}
