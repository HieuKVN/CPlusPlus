#include <bits/stdc++.h>
using namespace std;
int gcddequy(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcddequy(b, a % b);
}
int main()
{
    freopen("TIMX_GCD.INP", "r", stdin);
    freopen("TIMX_GCD.OUT", "w", stdout);
    int a, b, res, x, y;
    cin >> a >> b;
    res = gcddequy(a, b);
    for (int i = -1; i <= 10; i++)
    {
        for (int j = -1; j <= i; j++)
        {
            if (a * i + b * j == res)
            {
                x = i;
                y = j;
            }
            // a*x+b*y=res
        }
    }
    cout << x << " " << y;
    return 0;
}