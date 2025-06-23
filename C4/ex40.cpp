#include <iostream>

using namespace std;

void tax(float a)
{
	cout << (a * 1.1) * 1.16 << endl;
}

int main () 
{
	float bill_Value;

	cout << "Total bill : ";
	cin >> bill_Value;

	tax(bill_Value);
}