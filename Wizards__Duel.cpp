// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		l, p, q;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> l >> p >> q;
	cout << (p * l) / (float)(p + q) << endl;
	return 0;
}
