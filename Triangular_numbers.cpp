// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, sum = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
	cin >> n;
    for (int i = 1;i <= n;i++)
	{
		sum += i;
		if (sum == n)
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}
