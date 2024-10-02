#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MARKET.INP", "r", stdin);
    freopen("MARKET.OUT", "w", stdout);

    int n, M;
    cin >> n >> M;
    int w[n], v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i];
    }

    int dp[n + 1][M + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i - 1])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
            }
        }
    }

    cout << dp[n][M] << endl;

    return 0;
}
