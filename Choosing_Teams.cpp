// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
    int     n, k, input, max = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> k;
    for (int i = 0;i < n;i++)
    {
        cin >> input;
        if (5 - input >= k)
            max += 1;
    }
    cout << max / 3 << endl;
}
