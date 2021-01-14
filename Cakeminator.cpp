// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
	// variabels here
	int	 r, c, eated = 0, is_evil_in, count_dot;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	// your code here
	cin >> r >> c;
	string  cake[r];
	for (int i = 0;i < r;i++)
	{
		cin >> cake[i];
	}

	for (int i = 0;i < r;i++)
	{
		if (count(cake[i].begin(), cake[i].end(), 'S') != 0)
			continue ;
		eated += c;
		for (int j = 0;j < c;j++)
			cake[i][j] = '0';
	}

	for (int i = 0;i < c;i++)
	{
		count_dot = 0;
		is_evil_in = false;
		for (int j = 0;j < r;j++)
		{
			if (cake[j][i] == '.')
				count_dot += 1;
			else if (cake[j][i] == 'S')
			{
				is_evil_in = true;
				break ;
			}
		}
		if (is_evil_in == false)
			eated += count_dot;
	}
	cout << eated << endl;
}
