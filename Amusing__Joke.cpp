// #include <bits/stdc++.h>
#include "stdc++.h"
  
using namespace std;
int main()
{
    // variabels here
    string          input, guest_and_host, pile;
    // vector<char>    guest_and_host, pile;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> guest_and_host;
    cin >> input;
    guest_and_host += input;
    cin >> pile;
    sort(guest_and_host.begin(), guest_and_host.end());
    sort(pile.begin(), pile.end());
    if (guest_and_host == pile)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
