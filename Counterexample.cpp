#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	unsigned long long l, r;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> l >> r;
	if (l % 2 != 0)
		l += 1;
	if (abs((int)(r - l)) < 2)
		cout << "-1" << endl;
	else
		cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
	return 0;
}