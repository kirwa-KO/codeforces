// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, moves = 0;
	string	actual, code;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> actual >> code;
	for (int i = 0;i < n;i++)
	{
		moves += min(abs(actual[i] - code[i]), abs(min(actual[i], code[i]) - (max(actual[i], code[i]) - 10)));
	}
	cout << moves << endl;
	return 0;
}
