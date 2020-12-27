// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		a, b, win_a, win_b, draw;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    win_a = win_b = draw = 0;
	cin >> a >> b;
	for (int i = 1;i <= 6;i++)
	{
		if (abs(a - i) > abs(b - i))
			win_b += 1;
		else
		{
			if (abs(a - i) < abs(b - i))
				win_a += 1;
			else
				draw += 1;
		}
	}
	cout << win_a << ' ' << draw << ' ' << win_b << endl;
	return 0;
}
