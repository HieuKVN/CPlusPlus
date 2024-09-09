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

int main()
{
    sang(nmax);
    freopen("PRIMECNT.INP", "r", stdin);
    freopen("PRIMECNT.OUT", "w", stdout);
    int n, m, t;
    int d = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            if (f[i])
            {
                d++;
            }
        }
        cout << d << endl;
        d = 0;
    }

    return 0;
}
