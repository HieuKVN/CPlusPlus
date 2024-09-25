#include <bits/stdc++.h>
#define nmax 100000000
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
    freopen("SNTNHOHONN.INP", "r", stdin);
    freopen("SNTNHOHONN.OUT", "w", stdout);
    int n;
    cin >> n;
    sang(nmax);
    if (n < 2)
    {
        cout << "NO";
    }
    else
    {
        for (int i = n; i >= 2; i--)
        {
            if (f[i])
            {
                cout << i;
            }
        }
    }
    return 0;
}