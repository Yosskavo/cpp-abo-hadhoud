#include <iostream>

using namespace std;

void tax(int a)
{
	float days = a / 24.0;

	cout << days / 7.0 << " weeks\n";
	cout << days << " days\n";
}

int main () 
{
	int Number_of_hour;

	cout << "Please inter number of hour : ";
	cin >> Number_of_hour;

	tax(Number_of_hour);
}