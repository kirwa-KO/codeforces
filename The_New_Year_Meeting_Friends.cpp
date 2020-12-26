// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int				input, distance;
	vector<int>		persons;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    for (int i = 0;i < 3;i++)
	{
		cin >> input;
		persons.push_back(input);
	}
	sort(persons.begin(), persons.end());
	distance = persons[1] - persons[0] + persons[2] - persons[1];
	cout << distance << endl;
	return 0;
}
