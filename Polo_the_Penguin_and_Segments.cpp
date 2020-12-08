// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
    int     n, k, r, l, segment = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> n >> k;
    for (int i = 0;i < n;i++)
    {
        cin >> l >> r;
        segment += r - l + 1;
    }
    if (segment % k == 0)
        cout << '0' << endl;
    else
        cout << k - (segment % k) << endl;
    return 0;
}
