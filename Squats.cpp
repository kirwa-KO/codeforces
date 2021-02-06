// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
	// variabels here
	int		n, sit = 0, stand, to_change;
	char	changed;
	string	hamsters, out = "";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// your code here
	cin >> n;
	cin >> hamsters;
	for (auto x : hamsters)
		if (x == 'x')
			sit += 1;
	stand = n - sit;
	if (sit == n / 2)
	{
		cout << "0\n" << hamsters << endl;
		return 0;
	}
	to_change = abs(n / 2 - sit);
	out += to_string(to_change) + "\n";
	if (stand > sit)
		changed = 'x';
	else
		changed = 'X';
	for (auto x: hamsters)
	{
		if (to_change > 0 && x != changed)
		{
			out += changed;
			to_change -= 1;
		}
		else
			out += x;
	}
	cout << out << endl;
	return 0;
}