// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
	return a.second > b.second;
}

int main()
{
    // variabels here
	int n, input1, input2;
	vector<pair<int, int>>		laptops;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input1;
		cin >> input2;
		laptops.push_back(make_pair(input1, input2));
	}

	sort(laptops.begin(), laptops.end(), cmp);

	for (int i = 0;i < n - 1;i++)
	{
		if (laptops[i].first < laptops[i + 1].first)
		{
			cout << "Happy Alex\n";
			exit(0);
		}
	}

	cout << "Poor Alex\n"; 
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << laptops[i].first << ' ' << laptops[i].second << '\n';
	// }
	return 0;
}
