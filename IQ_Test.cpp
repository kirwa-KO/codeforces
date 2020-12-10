// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;

bool	check_2_2(string up, string down)
{
	size_t tags, dots;

	tags = count(up.begin(), up.end(), '#') + count(down.begin(), down.end(), '#');
	dots = count(up.begin(), up.end(), '.') + count(down.begin(), down.end(), '.');
	if (tags == 2 || dots == 2)
		return false;
	return true;
}

int main()
{
    // variabels here
	string lines[4];

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    for (int i = 0;i < 4;i++)
	{
		cin >> lines[i];
	}

	for (int i = 0;i < 3;i++)
	{
		if (check_2_2(lines[i].substr(0, 2), lines[i + 1].substr(0, 2)) == true ||
			check_2_2(lines[i].substr(1, 2), lines[i + 1].substr(1, 2)) == true ||
			check_2_2(lines[i].substr(2, 2), lines[i + 1].substr(2, 2)) == true)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
