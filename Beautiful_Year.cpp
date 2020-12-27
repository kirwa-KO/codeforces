// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int			year;
	set<char>	digits;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> year;
	year += 1;
	for (auto x: to_string(year))
		digits.insert(x);
	while (digits.size() != 4)
	{
		digits.clear();
		year += 1;
		for (auto x: to_string(year))
			digits.insert(x);
	}
	cout << year << endl;
	return 0;
}
