#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];
long long a, b, i;

void sang(long long u)
{
    long long j;
    for (long long i = 0; i <= u; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (i = 2; i * i <= u; i++)
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
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    sang(nmax);
    int n;
    cin >> n;
    for (int i = n; i <= n; i++)
    {
        if (f[n] && (f[(n - 1) / 2]))
        {
            cout << "yes";
        }
        else
            cout << "No";
    }

    return 0;
}
