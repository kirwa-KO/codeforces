// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, input, result = 0, j = 0;
	vector<int>		rating, odd_index;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		if (input % 2 != 0)
			odd_index.push_back(i);
		rating.push_back(input);
	}

	for (int i = 0;i < rating.size();i++)
	{
		rating[i] = round(rating[i] / 2.0);
		result += rating[i];
	}

	while (result != 0)
	{
		if (rating[odd_index[j]] > 0)
		{
			rating[odd_index[j]] -= 1;
			result -= 1;
		}
		else
		{
			rating[odd_index[j]] += 1;
			result += 1;
		}
		j++;
	}
	for (int i = 0;i < rating.size();i++)
		cout << rating[i] << '\n';
	return 0;
}
