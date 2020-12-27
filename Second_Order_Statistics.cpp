// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, input, i;
	vector<int>		numbers;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	if (n == 1)
	{
		cout << "NO\n";
		exit(0);
	}
	for (i = 0;i < n;i++)
	{
		cin >> input;
		numbers.push_back(input);
	}
	sort(numbers.begin(), numbers.end());
	for (i = 0;i < n - 1;i++)
	{
		if (numbers[i] != numbers[i + 1])
		{
			i += 1;
			break ;
		}
	}
	if (i == n - 1 && numbers[i] == numbers[i - 1])
		cout << "NO\n";
	else
		cout << numbers[i] << endl;
	return 0;
}
