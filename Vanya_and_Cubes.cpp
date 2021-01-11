// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
    int     n, level = 1, used = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
    while (1)
    {
        used += level * (level + 1) / 2;
        if (used > n)
        {
            level -= 1;
            break ;
        }
        level += 1;
    }
    cout << level << endl;
}
