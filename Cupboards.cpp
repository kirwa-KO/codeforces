// #include <bits/stdc++.h>
#include "stdc++.h"
 
using namespace std;
int main()
{
    // variabels here
    int     n, left_open, left_close, right_open, right_close, l, r;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
    left_open = left_close = right_open = right_close = 0;
    for (int i = 0;i < n;i++)
    {
        cin >> l >> r;
        if (l == 0)
            left_close += 1;
        else
            left_open += 1;
        if (r == 0)
            right_close += 1;
        else
            right_open += 1;
    }
    cout << min(left_close, left_open) + min(right_close, right_open) << endl;
}
