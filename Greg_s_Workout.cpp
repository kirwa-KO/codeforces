// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, input;
	int		exercices[3] = {0};

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		if (i % 3 == 0)
			exercices[0] += input;
		else
		{
			if (i % 3 == 1)
				exercices[1] += input;
			else
				exercices[2] += input;
		}
	}
	if (exercices[0] > exercices[1])
	{
		if (exercices[0] > exercices[2])
			cout << "chest\n";
		else
			cout << "back\n";
	}
	else
	{
		if (exercices[1] > exercices[2])
			cout << "biceps\n";
		else
			cout << "back\n";
	}
	return 0;
}
