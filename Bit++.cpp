// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, value = 0;
	string	statement;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> statement;
		if (statement.find('+') != string::npos)
			value++;
		else
			value--;
	}
	cout << value << endl;
	return 0;
}
