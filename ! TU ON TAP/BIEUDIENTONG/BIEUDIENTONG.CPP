#include <bits/stdc++.h>
using namespace std;
#define nmax 1000005

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

void xuly(int n)
{
    int d = 0;
    sang(n);
    for (int i = 1; i <= n; i++)
        if (f[i])
            for (int j = i; j <= n; j++)
                if (f[j] && (i + j == n))
                    d++;
    cout << d;
}

int main()
{
    freopen("BIEUDIENTONG.INP", "r", stdin);
    freopen("BIEUDIENTONG.OUT", "w", stdout);
    int n;
    cin >> n;
    xuly(n);
    return 0;
}