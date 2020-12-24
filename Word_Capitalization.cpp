// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	string word;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
    cin >> word;
	if (word != "" && word[0] >= 'a' && word[0] <= 'z')
		word[0] = word[0] - 32;
	cout << word << endl;
}
