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
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (f[n])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
