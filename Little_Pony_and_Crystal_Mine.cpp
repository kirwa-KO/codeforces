// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, m;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
	cin >> n;
	string out[n / 2];
	m = n - 1;
    for (int i = 0;i < n / 2;i++)
	{
		for (int j = 0;j < m / 2;j++)
		{
			out[i] += "*";
		}
		for (int j = 0;j < n - m;j++)
			out[i] += "D";
		for (int j = 0; j < m / 2; j++)
		{
			out[i] += "*";
		}
		out[i] += '\n';
		m -= 2;
	}
	for (int i = 0;i < n / 2;i++)
		cout << out[i];
	for (int i = 0;i < n;i++)
		cout << 'D';
	cout << '\n';
	for (int i = n / 2 - 1; i >= 0; i--)
		cout << out[i];
	return 0;
}
