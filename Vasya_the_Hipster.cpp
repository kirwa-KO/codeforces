// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		a, b;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> a >> b;
	if (a > b)
		cout << b << ' ' << (a - b) / 2 << endl;
	else
		cout << a << ' ' << (b - a) / 2 << endl;

	return 0;
}
