// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
	// variabels here
	int				n, steps;
	string			movement;
	vector<int>		vct;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
	cin >> n >> movement;
	
	int particule[n];

	for (int i = 0;i < n;i++)
		cin >> particule[i];
	
	for (int i = 0;i < n - 1;i++)
	{
		if (movement[i] == 'R' &&  movement[i + 1] == 'L')
		{
			steps = (particule[i + 1] - particule[i]) / 2;
			// cout << steps << endl;
			vct.push_back(steps);
			// return 0;
		}
	}
	if (vct.size() != 0)
		cout << *min_element(vct.begin(), vct.end()) << endl;
	else
		cout << "-1" << endl;
	return 0;
}
