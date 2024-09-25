#include <bits/stdc++.h>
#define nmax 10000
using namespace std;
int w[nmax], v[nmax], n, m;
void xuly()
{
    int i, j;
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][m] << endl;
    int s = 0;
    while (n != 0)
    {
        if (dp[n][m] != dp[n - 1][m])
        {
            cout << n << " ";
            s += w[n];
            m -= w[n];
        }
        n--;
    }
    cout << endl;
    cout << s;
}
int main()
{
    freopen("BL.INP", "r", stdin);
    freopen("BL.OUT", "w", stdout);
    int i;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    xuly();
    return 0;
}
