#include <iostream>

using namespace std;

void print_resualt(int number)
{
	if (number > 1000000)
		cout << number * 0.01 << endl;
	else if (number >= 500000 && number <= 1000000)
		cout << number * 0.02 << endl;
	else if (number >= 100000 && number < 500000)
		cout << number * 0.03 << endl;
	else if (number >= 50000 && number < 100000)
		cout << number * 0.05 << endl;
	else
		cout << 0 << endl;
}

int main()
{
	int totalesales;

	cout << "inter a totale sales : ";
	cin >> totalesales; 
	print_resualt(totalesales);
}
