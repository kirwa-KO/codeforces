// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int n, p, q, result = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> p >> q;
		if (q - p >= 2)
			result += 1;
	}
	cout << result << endl;
}
