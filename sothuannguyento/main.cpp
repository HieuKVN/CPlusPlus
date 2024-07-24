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

bool tongso(long long u)
{
    int tong = 0;
    while (u > 0)
    {
        tong = tong + u % 10;
        u = u / 10;
    }
    if (f[tong])
        return true;
    else
        return false;
}

bool kitu(long long u)
{
    while (u > 0)
    {
        int r = u % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return false;
        u = u / 10;
    }
    return true;
}
int main()
{
    // freopen("in.inp", "r", stdin);
    // freopen("out.out", "w", stdout);
    sang(nmax);
    int a, b, c;
    cin >> b;
    cin >> c;

    for (i = b; i <= c; i++)
    {
        if (f[i] && tongso(i) && kitu(i))
            cout << i << " ";
    }
    return 0;
}
