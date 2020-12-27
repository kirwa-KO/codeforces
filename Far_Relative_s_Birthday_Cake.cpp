// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, happy = 0, count;
	string	input;
	vector<string> rows;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin  >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		rows.push_back(input);
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (rows[i][j] == '.')
				continue ;
			for (int k = j + 1;k < n;k++)
				if (rows[i][k] == 'C')
					happy += 1;
			for (int k = i + 1; k < n; k++)
				if (rows[k][j] == 'C')
					happy += 1;
		}
	}
	cout << happy << endl;
	return 0;
}
