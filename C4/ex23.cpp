#include <iostream>
#include <cmath>

using namespace std;

void print_erea(int one, int sec, int thi)
{
	const float PI = 3.14;
	float p = (one + sec + thi) / 2.0;
	float tmp_o = p * (p - one) * (p - sec) * (p - thi); 
	float tmp = (one * sec * thi) / (4.0 * sqrt(tmp_o));
	cout << PI * pow(tmp, 2) << endl;
}

int main()
{
	int a;
	int b;
	int c;

	cout << "inter a first mamber : ";
	cin >> a;

	cout << "inter a second number : ";
	cin >> b;

	cout << "inter a third number : ";
	cin >> c;

	print_erea(a, b, c);
}
