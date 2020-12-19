// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		s, t, size_of_road;
	string	road;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> size_of_road;
	cin >> road;

	for (int i = 0;i < size_of_road;i++)
		if (road[i] != '.')
		{
			s = i;
			break;
		}
	for (int i = size_of_road - 1;i > 0;i--)
		if (road[i] != '.')
		{
			t = i;
			break;
		}

	if (road[s] == 'R' && road[t] == 'R')
		cout << s + 1 << ' ' << t + 1 + 1 << endl;
	else
	{
		if (road[s] == 'L' && road[t] == 'L')
			cout << t + 1 << ' ' << s + 1 - 1 << endl;
		else
		{
			for (int i = s;i < size_of_road;i++)
			{
				if (road[i] == 'L')
				{
					t = i;
					break;
				}
			}
			cout << s + 1 << ' ' << t - 1 + 1 << endl;
		}
		
	}

}
