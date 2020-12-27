// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, count = 0, number = 0;
	string	out = "";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j % 2 == number)
			{
				count += 1;
				out += 'C';
			}
			else
				out += '.';
		}
		out += '\n';
		number = !number;
	}
	cout << count << '\n';
	cout << out;
	return 0;
}
