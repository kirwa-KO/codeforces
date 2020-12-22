// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	unsigned int n;
	int sq;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    // your code here
    while (cin >> n && n != 0)
	{
		sq = (int)sqrt(n);
		if (sq * sq == n)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return (0);
}
