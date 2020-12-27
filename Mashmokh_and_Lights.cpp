// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int				n, m, b, old_b;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> m;
	int		lights[n];
	for (int i = 0;i < n;i++)
		lights[i] = 0;
	for (int i = 0;i < m;i++)
	{
		cin >> b;
		old_b = b;
		while(old_b <= n)
		{
			if (lights[old_b - 1] == 0)
				lights[old_b - 1] = b;
			old_b += 1;
		}
	}
	cout << lights[0];
	for (int i = 1;i < n;i++)
		cout <<  ' ' << lights[i];
	cout << endl;
	return 0;
}
