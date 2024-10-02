
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TIMX.INP", "r", stdin);
    freopen("TIMX.OUT", "w", stdout);

    int a, b, x;
    cin >> a >> b;
    for (int i = -min(a, b); i <= min(a, b); i++)
    {
        if (__gcd(a + i, b + i) == b - a)
        {
            x = i;
        }
    }
    cout << x;
    return 0;
}
