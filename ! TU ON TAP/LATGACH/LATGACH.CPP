#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("LATGACH.INP", "r", stdin);
    freopen("LATGACH.OUT", "w", stdout);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long dp[101] = {0};
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        cout << dp[n] << endl;
    }

    return 0;
}