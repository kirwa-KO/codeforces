// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	string	op1, op2, out = "";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
	cin >> op1;
	cin >> op2;
	for (int i = 0;i < op1.size();i++)
	{
		if (op1[i] != op2[i])
			out += '1';
		else
			out += '0';
	}
	cout << out << endl;
	return 0;
}
