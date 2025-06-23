#include <iostream>
#include <cmath>

using namespace std;

enum e_week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

void print_resualt(e_week day)
{
	switch (day)
	{
	case  e_week::Monday :
		cout << "Monday\n";
		break;
	case  e_week::Tuesday :
		cout << "Tuesday\n";
		break;
	case  e_week::Wednesday :
		cout << "Wednesday\n";
		break;
	case  e_week::Thursday :
		cout << "Thursday\n";
		break;
	case  e_week::Friday :
		cout << "Friday\n";
		break;
	case  e_week::Saturday :
		cout << "Saturday\n";
		break;
	default:
		cout << "Sunday\n";
		break;
	}
}

int main()
{
	int day;

	do {
		cout << "inter a number of day of week : ";
		cin >> day;
	} while (day > 7 || day < 1);
	print_resualt((e_week)(day - 1));
}
