// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
    int     d, input, harmed = 0;
    vector<int>     dragons_to_hurt;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> input;
    dragons_to_hurt.push_back(input);
    cin >> input;
    dragons_to_hurt.push_back(input);
    cin >> input;
    dragons_to_hurt.push_back(input);
    cin >> input;
    dragons_to_hurt.push_back(input);
    cin >> d;
    for (int i = 1;i <= d;i++)
    {
        for (auto x: dragons_to_hurt)
        {
            if (i % x == 0)
            {
                harmed += 1;
                break ;
            }
        }
    }
    cout << harmed << endl;
}
