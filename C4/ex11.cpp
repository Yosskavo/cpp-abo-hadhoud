#include <iostream>

using namespace std;

void read_number(int &one, int &sec, int &thi)
{
	cout << "inter first mark : ";
	cin >> one;

	cout << "inter second mark : ";
	cin >> sec;

	cout << "inter third mark : ";
	cin >> thi;
}

void print_resualt(int mark)
{
	if (mark >= 50)
		cout << "Pass\n";
	else
		cout << "Fail\n";
}

int avrage(int one, int sec, int thi)
{
	return ((one + sec + thi) / 3);
}

int main()
{
	int mark_one;
	int mark_sec;
	int mark_thi;

	read_number(mark_one, mark_sec, mark_thi);
	print_resualt(avrage(mark_one, mark_sec, mark_thi));
}
