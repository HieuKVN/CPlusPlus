#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DOITHO.INP", "r", stdin);
    freopen("DOITHO.OUT", "w", stdout);
    int n;
    cin >> n;
    long long f[100];
    f[1] = f[2] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 3; i <= 24; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
        }
        cout << f[i] << " ";
    }
    return 0;
}