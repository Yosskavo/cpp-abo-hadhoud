#include <iostream>

using namespace std;

void print_resualt(int penny, int nickel, int dime, int quarter, int dollar)
{
	int res = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;

	cout << res << " Pennies\n";
	cout << res / 100.0 << " Dollars\n";
}

int main()
{
	int penny;
	int nickel;
	int dime;
	int quarter;
	int dollar;


	cout << "inter a penny : ";
	cin >> penny;

	cout << "inter a nickel : ";
	cin >> nickel; 

	cout << "inter a dime : ";
	cin >> dime; 

	cout << "inter a quarter : ";
	cin >> quarter; 

	cout << "inter a dollar : ";
	cin >> dollar; 

	print_resualt(penny, nickel, dime, quarter, dollar);
}
