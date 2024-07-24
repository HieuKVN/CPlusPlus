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

bool kitu(long long u)
{
    while (u > 0)
    {
        int r = u % 10;
        if (f[u])
            return true;
        u = u / 10;
    }
    return false;
}

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    sang(nmax);
    cin >> a;
    if (kitu(a))
        cout << a << " la so sieu nguyen to!";
    else
        cout << a << " kp la so sieu nguyen to!";
    return 0;
}
