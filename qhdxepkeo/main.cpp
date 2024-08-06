#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t += a[i];
    }

    t /= 2;

    int f[t + 1];
    int d[n + 1];
    memset(d, 0, sizeof(f));
    memset(f, -1, sizeof(f));
    f[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = t; j >= a[i]; j--)
        {
            if (f[j - a[i]] != -1 && f[j] == -1)
            {
                f[j] = i;
            }
        }
    }

    s = t;

    while (f[s] == -1)
    {
        s--;
    }
    while (s > 0)
    {
        d[f[s]] = 1;
        s = s - a[f[s]];
    }

    long long s1 = 0, s2 = 0;

    for (i = 1; i <= n; i++)
    {
        if (d[i] == 1)
        {
            s1 += a[i];
        }
        else
            s2 += a[i]
    }

    cout << abs(s1 - s2) << end;

    for (i = 1; i <= n; i++)
    {
        if (d[i] == 1)
            cout << a[i] << " ";
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        if (d[i] == 0)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}