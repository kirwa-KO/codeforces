// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
	// variabels here
	pair<int, int>	min_solider, max_solider;
	int				n, input;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	// your code here
	cin >> n;
	max_solider.first = n - 1;
	max_solider.second = 0;
	min_solider.second = INT_MAX;
	min_solider.first = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		if (min_solider.second >= input)
		{
			min_solider.second = input;
			min_solider.first = i;
		}
		if (max_solider.second < input)
		{
			max_solider.second = input;
			max_solider.first = i;
		}
	}
	if (max_solider.first > min_solider.first)
		cout << max_solider.first + (n - 1 - min_solider.first) - 1 << endl;
	else
		cout << max_solider.first + (n - 1 - min_solider.first) << endl;
	return 0;
}
