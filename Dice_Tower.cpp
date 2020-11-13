#include <iostream>

using namespace std;
int main()
{
	int n, x, a, b, complementOfXToMakeSeven;

	cin >> n >> x;
	complementOfXToMakeSeven = 7 - x;
	for (int i = 0;i < n;i++)
	{
		cin >> a >> b;
		if (a == complementOfXToMakeSeven || b == complementOfXToMakeSeven || a == x || b == x)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}