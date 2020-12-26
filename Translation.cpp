#include <bits/stdc++.h>
// #include "stdc++.h"
 
using namespace std;
int main()
{
    // variabels here
	string s, t;
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >>s >> t;
	if (s.size() != t.size())
		cout << "NO\n";
	else
	{
		int j = t.size() - 1;
		for (int i = 0;i < s.size();i++, j--)
		{
			if (s[i] != t[j])
			{
				cout << "NO\n";
				exit(0);
			}
		}
		cout << "YES\n";
	}
	return 0;
}