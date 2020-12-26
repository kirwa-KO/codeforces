// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int	k, n, w, all_cost = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin  >> k >> n >> w;
	for (int i = 1;i <= w;i++)
	{
		all_cost += k * i;
	}
	if (all_cost > n)
		cout << all_cost - n << endl;
	else
		cout << '0' << endl;
	return 0;
}