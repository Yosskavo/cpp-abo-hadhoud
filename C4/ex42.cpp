#include <iostream>

using namespace std;

void print_resualt(int seconds, int minutes, int hours, int days)
{
	cout << seconds + (minutes * 60) + (hours * 60 * 60) + (days * 24 * 60 * 60) << " seconds" << endl;
}

int main()
{
	int seconds;
	int days;
	int hours;
	int minutes;
	
	cout << "inter a days : ";
	cin >> days;
	cout << "inter a hours : ";
	cin >> hours;
	cout << "inter a minutes : ";
	cin >> minutes;
	cout << "inter a sec : ";
	cin >> seconds;


	print_resualt(seconds, minutes, hours, days);
}