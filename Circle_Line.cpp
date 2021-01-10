// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;

void	swap(int &a, int & b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
    // variabels here
	int		n, input, start, end, direct, reverse;
	vector<int>	d;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		d.push_back(input);
	}
	cin >> start >> end;
	if (start > end)
		swap(start, end);
	direct = reverse = 0;
	for (int i = start - 1;i < end - 1;i++)
		direct += d[i];
	for (int i = end - 1;;i++)
	{
		i %= n;
		if (i == start - 1)
			break ;
		reverse += d[i];
	}
	if ((direct != 0 && direct <= reverse) || reverse == 0)
		cout << direct << endl;
	else
		cout << reverse << endl;
	return 0;
}
