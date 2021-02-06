// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
	// variabels here
	int                 n;
	string              name, priority, out = "";
	vector<string>    rat, woman_child, man, captain;


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	// your code here
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> name;
		cin >> priority;
		// cout << name << " " << priority << endl;
		if (priority == "rat")
			rat.push_back(name);
		else if (priority == "woman" || priority == "child")
			woman_child.push_back(name);
		else if (priority == "man")
			man.push_back(name);
		else if (priority == "captain")
			captain.push_back(name);
	}

	for (auto & x: rat)
		out += x + '\n';
	for (auto & x: woman_child)
		out += x + '\n';
	for (auto & x: man)
		out += x + '\n';
	for (auto & x: captain)
		out += x + '\n';

	cout << out;

	return 0;
}
