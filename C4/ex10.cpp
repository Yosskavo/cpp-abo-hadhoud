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

void print_avrage(int one, int sec, int thi)
{
	cout << (one + sec + thi) / 3 << endl;
}

int main()
{
	int mark_one;
	int mark_sec;
	int mark_thi;

	read_number(mark_one, mark_sec, mark_thi);
	print_avrage(mark_one, mark_sec, mark_thi);
}
