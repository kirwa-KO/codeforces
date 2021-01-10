// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
    // variabels here
	int		d1, d2, d3, road_1, road_2, road_3, road_4;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    // your code here
    cin >> d1 >> d2 >> d3;
	road_1 = d1 * 2 + d2 * 2;
	road_2 = d1 + d3 + d2;
	road_3 = d3 * 2 + d2 * 2;
	road_4 = d3 * 2 + d1 * 2;
	cout << min(min(road_1, road_2), min(road_3, road_4)) << endl;
}
