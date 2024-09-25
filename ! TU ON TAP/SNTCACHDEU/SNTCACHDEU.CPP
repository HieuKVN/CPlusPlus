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
    freopen("SNTCACHDEU.INP", "r", stdin);
    freopen("SNTCACHDEU.OUT", "w", stdout);
    int d;
    cin >> d;
    sang(nmax);
    int i = 1;
    for (int i = 2; i <= nmax; i++)
    {
        if (f[i] && f[i + d])
        {
            cout << i << " " << i + d;
            return 0;
        }
    }
    cout << "NO";
}
