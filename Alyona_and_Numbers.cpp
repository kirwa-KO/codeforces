// #include <bits/stdc++.h>
#include "/Users/ibaali/bits/stdc++.h"

using namespace std;
int main()
{
	long long a[5], b[5];
	int n, m;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i = 1;i <= n; i++)
	{
		a[i%5]++;
	}
	for (int j = 1;j <= m; j++)
	{
		b[j%5]++;
	}
	cout << a[0] * b[0] + a[1] * b[4] + \
			a[2] * b[3] + a[3] * b[2] + \
			a[4] * b[1] << endl;
}