// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
    int         click_number, lights[3][3];

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    for (int i = 0;i < 3;i++)
        for (int j = 0;j < 3;j++)
            cin >> lights[i][j];

    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            click_number = 0;
            if (j - 1 >= 0)
                click_number += lights[i][j - 1];
            if (j + 1 <= 2)
                click_number += lights[i][j + 1];
            if (i - 1 >= 0)
                click_number += lights[i - 1][j];
            if (i + 1 <= 2)
                click_number += lights[i + 1][j];
            click_number += lights[i][j];
            
            if (click_number % 2)
                    cout << "0";
            else
                    cout << "1";
        }
        cout << '\n';
    }
    return 0;
}
