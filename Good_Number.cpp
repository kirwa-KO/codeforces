#include <iostream>

using namespace std;

void makeFalseInTab(bool tab[], int k)
{
	for (int i = 0;i < k;i++)
		tab[i] = false;
}

bool checkIsAllTrue(bool tab[], int k)
{
	for (int i = 0;i < k;i++)
		if (tab[i] == false)
			return false;
	return true;
}

int main(void)
{
	int n, k, result = 0, tmp;
	string str;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;
	bool tab[k + 1];
	for (int i = 0;i < n;i++)
	{
		cin >> str;
		makeFalseInTab(tab, k + 1);
		for (int j = 0;j < str.length();j++)
		{
			tmp = (int)(str[j]) - 48;
			// if (tmp > k)
			// 	break;
			tab[tmp] = true;
		}
		if (checkIsAllTrue(tab, k + 1) == true)
			result += 1;
	}
	cout << result << endl;
	return 0;
}