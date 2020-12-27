// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int				n, k;
	string			out ="";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> k;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (i == j)
				out += to_string(k);
			else
				out += '0';
			if (j != n - 1)
				out += ' ';
		}
		out += '\n';
	}
	cout << out;
	return 0;
}
