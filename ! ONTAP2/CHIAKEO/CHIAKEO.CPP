#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    long long t = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t += a[i];
    }

    t = t / 2;
    vector<int> f(t + 1, -1);
    vector<int> d(n + 1, 0);
    f[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = t; j >= a[i]; j--)
        {
            if (f[j - a[i]] != -1 && f[j] == -1)
            {
                f[j] = i;
            }
        }
    }

    int s = t;
    while (f[s] == -1)
    {
        s--;
    }

    while (s > 0)
    {
        d[f[s]] = 1;
        s -= a[f[s]];
    }

    long long s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 1)
        {
            s1 += a[i];
        }
        else
        {
            s2 += a[i];
        }
    }

    cout << abs(s1 - s2) << endl;

    for (int i = 0; i < n; i++)
    {
        if (d[i] == 1)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (d[i] == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}