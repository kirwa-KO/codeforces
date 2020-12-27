// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		n;
	string	number = "";

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> n;
	for (int i = 0;i < 1000;i++)
		number += to_string(i + 1);
	cout << number[n - 1] << endl;
	return 0;
}
