#include <bits/stdc++.h>
#define nmax 10000000 // broken 10^12
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
void xuly(int n)
{
    int s = 0;
    while (n > 0)
    {
        int kt = n % 10;
        if (f[kt])
        {
            s = s + kt;
        }
        n /= 10;
    }
    cout << s;
}
int main()
{
    freopen("TONGNSNT.INP", "r", stdin);
    freopen("TONGNSNT.OUT", "w", stdout);
    int n;
    sang(nmax);
    cin >> n;
    xuly(n);
    return 0;
}