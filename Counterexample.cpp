#include <iostream>
#include <numeric>

using namespace std;

int main(void)
{
	unsigned long long l, r, first_coprime, second_coprime;
	bool founded = false;

	cin >> l >> r;
	// cout << l << " " << r << endl;
	if (r == l + 1)
	{
		cout << -1 << endl;
		return 0;
	}
	while (l < r)
	{
		first_coprime = l + 1;
		while (first_coprime < r)
		{
			if (gcd(l, first_coprime) == 1)
			{
				second_coprime = first_coprime + 1;
				while (second_coprime <= r)
				{
					if (gcd(first_coprime, second_coprime) == 1 && gcd(second_coprime, l) != 1)
					{
						founded = true;
						break;
					}
					second_coprime += 1;
				}
				if (founded == true)
				{
					cout << l << ' ' << first_coprime << ' ' << second_coprime << endl;
					return 0;
				}
			}
			first_coprime += 1;
		}
		l += 1;
	}
	cout << -1 << endl;
	return 0;
}