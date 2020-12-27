// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, k, result = 0, lucky ;
	string	input;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> k;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		if (input.length() < k)
			result += 1;
		else
		{
			lucky = 0;
			for (auto x: input)
			{
				if (x == '4' || x == '7')
					lucky += 1;
			}
			if (lucky <= k)
				result += 1;
		}	
	}
	cout << result << endl;
	return 0;
}
