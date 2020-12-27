// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, input, indexed = 1, count = 0;
	vector<pair<int, int>>	a, s_a;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		a.push_back(pair<int, int>(input, 0));
	}
	s_a = a;
	sort(s_a.rbegin(), s_a.rend());
	for (int i = 0;i < n;i++)
	{
		count = 0;
		for (int j = 0;j < n;j++)
		{
			if (s_a[i].first == a[j].first && a[j].second == 0)
			{
				a[j].second = indexed;
				count += 1;
			}
		}
		indexed += count;
	}

	cout << a[0].second;
	for (int i = 1;i < n;i++)
		cout << ' ' << a[i].second;
	cout << endl;
	return 0;
}
