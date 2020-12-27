// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n, input, nb_odd, nb_even;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    nb_odd = nb_even = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> input;
		if (input % 2 == 0)
			nb_even += 1;
		else
			nb_odd += 1;
	}
	if (nb_odd % 2 == 1)
		cout << nb_odd << endl;
	else
		cout << nb_even << endl;
	return 0;
}
