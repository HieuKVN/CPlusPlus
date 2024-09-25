#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
long long f[nmax];
void sang(long long u)
{
    long long j;
    for (long long i = 0; i <= u; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (j = i * i; j <= u; j += i)
                f[j] = 0;
        }
    }
}
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
    sang(nmax);
    freopen("PRPA.INP", "r", stdin);
    freopen("PRPA.OUT", "w", stdout);
    int n;
    cin >> n;
    int m = n + 1;
    while (m <= nmax)
    {
        if (f[m] && (dn(m) == m))
        {
            cout << m;
            return 0;
        }
        m++;
    }
    return 0;
}
