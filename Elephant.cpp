// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		x;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> x;
	if (x <= 5)
		cout << "1\n";
	else
		cout << ceil(x / 5.) << endl;
	return 0;
}
