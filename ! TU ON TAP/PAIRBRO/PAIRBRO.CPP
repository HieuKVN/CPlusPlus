#include <bits/stdc++.h>
using namespace std;
const long long nmax = 1e6;
vector<bool> f(nmax, true);
void sang(long long u)
{
    f[0] = f[1] = false;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (long long j = i * i; j <= u; j += i)
            {
                f[j] = false;
            }
        }
    }
}
int main()
{
    freopen("PAIRBRO.INP", "r", stdin);
    freopen("PAIRBRO.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    int d = 0;
    sang(n);
    for (int i = 2; i <= n; i++)
    {
        if (f[i] && (i + k <= n) && f[i + k])
        {
            d++;
        }
    }
    cout << d;
    return 0;
}