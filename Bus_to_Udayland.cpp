// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n;
	bool	exist_a_place = false;
	string	input, out = "";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		if (input[0] == 'O' && input[1] == 'O' && exist_a_place == false)
		{
			input[0] = input[1] = '+';
			exist_a_place = true;
		}
		else
		{
			if (input[3] == 'O' && input[4] == 'O' && exist_a_place == false)
			{
				input[3] = input[4] = '+';
				exist_a_place = true;
			}
		}
		out += input + '\n';
	}
	if (exist_a_place == true)
		cout << "YES\n" << out;
	else
		cout << "NO\n";
	return 0;
}
