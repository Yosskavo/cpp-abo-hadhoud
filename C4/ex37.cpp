#include <iostream>

using namespace std;

void keep_sum(void)
{
	int num;
	int res;

	num = 0;
	res = 0;
	while (num != -99)
	{
		cout << "inter a number : ";
		cin >> num;
		if (num != -99)
			res += num;
	}
	cout << res << endl;
}

int main()
{
	keep_sum();
}
