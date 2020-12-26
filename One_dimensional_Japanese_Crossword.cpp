// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, result = 0, index;
	string	row;
	vector<int>		indexes;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	cin >> row;
	for (int i = 0;i < n;i++)
	{
		index = 0;
		if (row[i] == 'B')
		{
			while (row[i] == 'B')
			{
				index += 1;
				i += 1;
			}
			indexes.push_back(index);
			result += 1;
		}
	}
	cout << result << '\n';
	if (result > 0)
		cout << indexes[0];
	for (int i = 1;i < indexes.size();i++)
	{
		cout << ' ' << indexes[i];
	}
	cout << "\n";
	return 0;
}
