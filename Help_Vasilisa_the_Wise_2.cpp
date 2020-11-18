#include <iostream>
#include <set>

using namespace std;

int r1, r2, c1, c2, d1, d2, gems[4];

bool    checkIsValidKey()
{
    set <int> setForKeys;

    if (gems[0] <= 0 || gems[0] >= 10 ||
        gems[1] <= 0 || gems[1] >= 10 ||
        gems[2] <= 0 || gems[2] >= 10 ||
        gems[3] <= 0 || gems[3] >= 10)
        return 0;

    setForKeys.insert(gems[0]);
    setForKeys.insert(gems[1]);
    setForKeys.insert(gems[2]);
    setForKeys.insert(gems[3]);

    if (setForKeys.size() != 4)
        return false;

    if (gems[0] + gems[1] == r1 &&
        gems[2] + gems[3] == r2 &&
        gems[0] + gems[2] == c1 &&
        gems[1] + gems[3] == c2 &&
        gems[0] + gems[3] == d1 &&
        gems[1] + gems[2] == d2)
        return true;

    return false;
}

int     main( void )
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;


    for (int i = 1;i < 10;i++)
    {
        gems[0] = i;
        gems[1] = r1 - i;
        gems[2] = c1 - i;
        gems[3] = d1 - i;
        if (checkIsValidKey() == true)
        {
            cout << gems[0] << ' ' << gems[1] << '\n';
            cout << gems[2] << ' ' << gems[3] << endl;
            return 0;
        }

    }
    cout << -1 << endl;
    return 0;
}