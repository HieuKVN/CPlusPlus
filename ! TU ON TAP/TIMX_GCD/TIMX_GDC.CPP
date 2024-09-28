#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TIMX_GCD.INP", "r", stdin);
    freopen("TIMX_GCD.OUT", "w", stdout);
    int a, b, res, x, y;
    cin >> a >> b;
    res = __gcd(a, b);
    for (int i = -min(a, b); i <= min(a, b); i++)
    {
        for (int j = i; j <= min(a, b); j++)
        {
            if (a * i + b * j == res)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}