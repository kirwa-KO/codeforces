// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, before, after;
	string	name;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin  >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> name >> before >> after;
		if (before >= 2400 && before < after)
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}
