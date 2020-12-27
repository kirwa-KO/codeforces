// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int				n;
	string			out = "";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	vector<pair<int, int>>		cards(n);
	for (int i = 0;i < n;i++)
	{
		cin >> cards[i].first;
		cards[i].second = i + 1;
	}

	sort(cards.begin(), cards.end());

	for (int i = 0, j = cards.size() - 1;i < j;i++, j--)
		out += to_string(cards[i].second) + ' ' + to_string(cards[j].second) + '\n';

	cout << out;
	return 0;
}
