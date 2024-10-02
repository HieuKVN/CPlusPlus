#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    long long tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }

    int t = tong / 2;
    vector<int> dp(t + 1, 0);
    vector<int> d(n, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = t; j >= a[i]; j--)
        {
            if (dp[j - a[i]] > 0)
            {
                dp[j] = 1;
            }
        }
    }

    int s = t;
    while (s > 0 && dp[s] == 0)
    {
        s--;
    }

    while (s > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s >= a[i] && dp[s - a[i]] > 0 && d[i] == 0)
            {
                d[i] = 1;
                s -= a[i];
                break;
            }
        }
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
