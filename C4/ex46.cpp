#include <iostream>

using namespace std;

void print_resualt(int la, int mp)
{
	cout << la / mp << " Months" << endl;
}

int main()
{
	int loan_amount;
	int monthly_paiment;

	cout << "inter a loan amount : ";
	cin >> loan_amount; 

	cout << "inter a monthly paiment : ";
	cin >> monthly_paiment; 
	
	print_resualt(loan_amount, monthly_paiment);
}
