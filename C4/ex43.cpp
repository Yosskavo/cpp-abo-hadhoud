#include <iostream>
#include <cmath>

using namespace std;

void print_resualt(int seconds)
{
	int days;
	int hours;
	int minutes;

	days = floor(seconds / (24 * 60 * 60));
	seconds = seconds % (24 * 60 * 60);
	hours = floor(seconds / (60 * 60));
	seconds = seconds % (60 * 60);
	minutes = floor(seconds / 60);
	seconds = seconds % (60);

	cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;
}

int main()
{
	int seconds;

	cout << "inter a sec : ";
	cin >> seconds;

	print_resualt(seconds);
}
