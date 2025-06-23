#include <iostream>

using namespace std;

void print_resualt(int a, int b, char c)
{
	if (c == '+')
		cout << a + b << endl;
	else if (c == '*')
		cout << a * b << endl;
	else if (c == '-')
		cout << a - b << endl;
	else if ('/')
		cout << a / b << endl;
}

int main()
{
	int a;
	int b;
	char c;

	cout << "inter a first number : ";
	cin >> a;
	cout << "inter a second number : ";
	cin >> b; 
	cout << "inter a operator : ";
	cin >> c; 
	print_resualt(a, b, c);
}
