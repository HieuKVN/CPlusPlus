#include <bits/stdc++.h>
#define nmax 1000
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
    int n, s;
    s = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sang(nmax);
    for (int i = 0; i < n; i++)
    {
        if (f[a[i]])
            s += a[i];
    }
    cout << s << endl;
    return 0;
}
