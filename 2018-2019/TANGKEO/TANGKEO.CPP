#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TANGKEO.INP", "r", stdin);
    freopen("TANGKEO.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> a(n);
    int tong = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }

    int nua = tong / 2;

    vector<int> dp(nua + 1, -1);
    vector<int> d(n + 1, 0);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = nua; j >= a[i - 1]; j--)
        {
            if (dp[j - a[i - 1]] != -1 && dp[j] == -1)
            {
                dp[j] = i;
            }
        }
    }

    int s = nua;
    while (s > 0 && dp[s] == -1)
    {
        s--;
    }

    while (s > 0)
    {
        d[dp[s]] = 1;
        s -= a[dp[s] - 1];
    }

    long long s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 1)
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
        if (d[i + 1] == 0)
        {
            cout << a[i] << " ";
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 1)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
