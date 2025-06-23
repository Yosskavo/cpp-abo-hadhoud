#include <iostream>

using namespace std;

void paid_back(int a, int b)
{
	cout << b - a << endl;
}

int main () 
{
	int Cash_Paid;
	int Total_bill;

	cout << "Total bill : ";
	cin >> Total_bill;

	cout << "Cash Paid : ";
	cin >> Cash_Paid;

	paid_back(Total_bill, Cash_Paid);
}