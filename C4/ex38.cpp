#include <iostream>

using namespace std;

void is_prime(int a)
{
	int i;
	int half;

	i = 2;
	half = a / 2;
	while (i <= half)
	{
		if (a % i == 0)
		{
			cout << "Not prime\n";
			return ;
		}
		i++;
	}
	cout << "Prime\n";
}

int main()
{
	int prime;

	cout << "inter a number : ";
	cin >> prime;
	is_prime(prime);
}
