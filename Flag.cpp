// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
    int     n, m;
    set<char> elements_rows;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n >> m;
    string  rows[n];
    for (int i = 0;i < n;i++)
        cin >> rows[i];
    for (int i = 0;i < n;i++)
    {
        for (auto x: rows[i])
            elements_rows.insert(x);
        if (elements_rows.size() != 1 || (i < n - 1 && rows[i] == rows[i + 1]))
        {
            cout << "NO" << endl;
            return (0);
        }
        elements_rows.clear();
    }

    cout << "YES" << endl;
}
