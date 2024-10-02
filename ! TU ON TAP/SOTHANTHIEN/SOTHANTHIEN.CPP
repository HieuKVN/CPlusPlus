#include <bits/stdc++.h>
using namespace std;
int dn(int n)
{
    int kq = 0;
    while (n > 0)
    {
        kq = kq * 10 + n % 10;
        n = n / 10;
    }
    return kq;
}
int main()
{
    freopen("SOTHANTHIEN.INP", "r", stdin);
    freopen("SOTHANTHIEN.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    int d = 0;
    for (int i = n; i <= m; i++)
    {
        if (__gcd(i, dn(i)) == 1)
        {
            d++;
        }
    }
    cout << d;
    return 0;
}