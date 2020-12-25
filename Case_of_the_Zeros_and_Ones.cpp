// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	string	word;
	int	nb_zero, nb_one, n;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    // your code here
	cin >> n;
	cin >> word;

	nb_one = count(word.begin(), word.end(), '0');
	nb_zero =  count(word.begin(), word.end(), '1');

	// cout << n - ((nb_one >= nb_zero) ? nb_zero : nb_one) << endl;
	cout << n - min(nb_zero, nb_one) * 2 << endl;

	return 0;
}
