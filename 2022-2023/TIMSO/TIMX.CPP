#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TIMX.INP", "r", stdin);
    freopen("TIMX.OUT", "w", stdout);
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int x1, x2;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (a1 * i + b1 == a2 * j + b2)
            {
                x1 = i;
                x2 = j;
                break;
            }
        }
    }
    cout << x1 << " " << x2;
    return 0;
}