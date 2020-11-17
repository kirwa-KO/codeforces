// #include <bits/stdc++.h>
#include "/Users/ibaali/bits/stdc++.h"

using namespace std;
int main(void)
{
    int n, k;
    int *tab;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    tab = new int[n * 2 + 1];
    for (int i = 0;i < 2 * n + 1;i++)
        cin >> tab[i];

    for (int i = 0;i < 2 * n + 1;i++)
    {
        if (k && tab[i] - 1 > tab[i - 1] && tab[i] - 1 > tab[i + 1])
        {
            k--;
            cout << tab[i] - 1 << ' ';
        }
        else
            cout << tab[i] << ' ';
    }
    cout << endl;
    delete [] tab;
    return (0);
}