#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one, int sec)
{
	cout << (one * sec) / 2 << endl;
}

int main()
{
	int a;
	int h;

	cout << "inter a first mamber : ";
	cin >> a;

	cout << "inter a second number : ";
	cin >> h;

	print_erea(a, h);
}
