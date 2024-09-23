#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];

void sang(long long u)
{
    for (long long i = 0; i <= u; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (long long j = i * i; j <= u; j += i)
                f[j] = 0;
        }
    }
}

int main()
{
    freopen("SNTSINHDOI.INP", "r", stdin);
    freopen("SNTSINHDOI.OUT", "w", stdout);

    sang(nmax);

    int n, k;
    cin >> n >> k;

    long long d = 0;

    for (long long i = 1; i <= n; i++)
    {
        if (f[i] && f[i + k])
            d++;
    }

    cout << d << endl;

    return 0;
}
