// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, sumX, sumY, sumZ, x, y, z;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> n;
	sumX = sumY = sumZ = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> x >> y >> z;
		sumX += x;
		sumY += y;
		sumZ += z;
	}

	if (sumX == 0 && sumY == 0 && sumZ == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
