#include <bits/stdc++.h>
using namespace std;

int i, j, n, k;

int f[1000][1000];

void xuly()
{
    f[0][0] = 1;

    for (int i = 1; i <= 25; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j] * j;
        }
    }
    cout << f[n][k] << endl;
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        xuly();
    }

    return 0;
}