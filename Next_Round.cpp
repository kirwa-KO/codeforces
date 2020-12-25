// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int	n, k, tmp, result = 0;
	vector<int> participant;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
	cin >> n >> k;
    for (int i = 0;i < n;i++)
	{
		cin >> tmp;
		participant.push_back(tmp);
	}

	for (int i = 0;i < n;i++)
	{
		if (participant[i] == 0)
			continue ;
		if (participant[i] >= participant[k - 1])
			result += 1;
		else
			break ;
	}
	cout << result << endl;

	return 0;
}
