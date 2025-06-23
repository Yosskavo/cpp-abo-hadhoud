#include <iostream>

using namespace std;

void print_resualt(int mark)
{
	if (mark >= 50)
		cout << "Pass\n";
	else
		cout << "Fail\n";
}

int main()
{
	int mark;

	cout << "inter a mark : ";
	cin >> mark; 
	print_resualt(mark);
}
