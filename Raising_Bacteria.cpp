// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		x;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> x;
	int count = 0;
	while (x != 0)
	{
		if (x % 2)
			count += 1;
		x /= 2;
	}
	cout << count << endl;
	return (0);
}
