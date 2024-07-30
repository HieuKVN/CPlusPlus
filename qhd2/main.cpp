#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;

    int t[n + 1], r[n + 1], f[n + 1];

    for (int i = 1; i <= n; i++)
    {

        cin >> t[i];
    }

    for (int i = 1; i < n; i++)
    {
        cin >> r[i];
    }

    f[1] = t[1];
    f[2] = min(t[1] + t[2], r[1]);

    for (int i = 3; i <= n; i++)
    {
        f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1]);
    }

    cout << f[n];

    return 0;
}