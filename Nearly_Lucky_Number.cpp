// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int			count = 0;
	string		input;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> input;
	for(auto x: input)
	{
		if (x == '4' || x == '7')
			count += 1;
	}
	if (count == 4 || count == 7)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
