#include <iostream>

using namespace std;

void print_erea(int one, int sec)
{
	cout << one * sec << endl;
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
