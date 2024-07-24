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
int pt(int n)
{
    int res = -1e9;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            res = max(res, i);
            n /= i;
        }
    }
    if (n > 1)
        res = max(res, n);
    return res;
}

int main()
{
    int n, res;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    sang(nmax);
    cin >> n;
    if (f[pt(n)])
        cout << pt(n);
}
