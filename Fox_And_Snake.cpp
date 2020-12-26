// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, m;
	string	all, left, right, out = "";
	bool	right_or_left = true;

	all = left = "#";
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> m;
	for (int i = 1;i < m;i++)
	{
		all += "#";
		right += ".";
		left += ".";
	}
	all += '\n';
	right += "#\n";
	left += '\n';
	
	out += all;
	for (int i = 0;i < n / 2;i++)
	{
		if (right_or_left)
			out += right;
		else
			out += left;
		out += all;
		right_or_left = !right_or_left;
	}
	cout << out << endl;
	return 0;
}
