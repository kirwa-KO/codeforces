// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int				n, tmp;
	vector<int>		a_vect;
	set<int>		a_set;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> n;
	if (n != 1)
	{
		for (int i = 0;i < n;i++)
		{
			cin >> tmp;
			a_vect.push_back(tmp);
			a_set.insert(tmp);
		}

		for (auto x: a_set)
		{
			if (count(a_vect.begin(), a_vect.end(), x) > ceil(n / 2.0))
			{
				cout << "NO" << endl;
				exit(0);
			}
		}
	}
	cout << "YES" << endl;
	return (0);
}
