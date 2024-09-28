#include <bits/stdc++.h>
using namespace std;
#define nmax 100005

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
    freopen("TWINS.INP", "r", stdin);
    freopen("TWINS.OUT", "w", stdout);
    sang(nmax);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s = 0, d = 0;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            if (f[i])
            {
                s += i;
                if (f[dn(i)] && i != dn(i))
                {
                    d++;
                }
            }
        }
        cout << s << " " << d << endl;
    }

    return 0;
}