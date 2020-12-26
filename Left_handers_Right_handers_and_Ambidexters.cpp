// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		l, r, a, result;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> l >> r >> a;
	if (l == r)
		result = l + r + a;
	else
	{
		if (l > r)
		{
			if (l < r + a)
				result = l * 2 + ((r + a) - l);
			else
				result = min(l, r + a) * 2;
		}
		else
		{
			if (r < l + a)
				result = r * 2 + ((l + a) - r);
			else
				result = min(l + a, r) * 2;
		}
	}
	if (result % 2 == 1)
		cout << result - 1 << endl;
	else
		cout << result << endl;
	return 0;
}
