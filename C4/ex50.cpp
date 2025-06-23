#include <iostream>

using namespace std;

void print_balance(void)
{
	cout << "Your balance is 7500\n";
}
void read_pin(void)
{
	const int password = 1234;
	int pin;
	int cont;

	cont = 0;
	do 
	{
		cout << "Please inter your password : ";
		cin >> pin;
		if (password != pin)
			cont++;
	} while (password != pin && cont < 3);
	if (cont == 3)
	{
		cout << "Card is locked\n";
		return ;
	}
	print_balance();
}


int main ()
{
	read_pin();
}