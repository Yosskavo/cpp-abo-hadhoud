#include <iostream>

using namespace std;

void print_name(string name)
{
	cout << "hello mr/miss : " << name << endl;
}

int main()
{
	string name;

	cout << "inter your name : ";
	cin >> name; 
	print_name(name);
}
