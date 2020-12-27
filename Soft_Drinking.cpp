// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int n, k, l, c, d, p, nl, np;

								  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	cout << min(min(k * l / nl, c * d), p / np) / n << endl;
}
