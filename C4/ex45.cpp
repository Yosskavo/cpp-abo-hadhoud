#include <iostream>
#include <cmath>

using namespace std;

enum e_week {January, February, March, April, May, June, July, August, September, October, November, December};

void print_resualt(e_week month)
{
	switch (month)
	{
	case  e_week::January :
		cout << "January\n";
		break;
	case  e_week::February :
		cout << "February\n";
		break;
	case  e_week::March :
		cout << "March\n";
		break;
	case  e_week::April :
		cout << "April\n";
		break;
	case  e_week::May :
		cout << "May\n";
		break;
	case  e_week::June :
		cout << "June\n";
		break;
	case  e_week::July :
		cout << "July\n";
		break;
	case  e_week::August :
		cout << "August\n";
		break;
	case  e_week::September :
		cout << "September\n";
		break;
	case  e_week::October :
		cout << "October\n";
		break;
	case  e_week::November :
		cout << "November\n";
		break;
	default:
		cout << "December\n";
		break;
	}
}

int main()
{
	int month;

	do {
		cout << "inter a number of month : ";
		cin >> month;
	} while (month > 12 || month < 1);
	print_resualt((e_week)(month - 1));
}
