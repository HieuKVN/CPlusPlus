#include <bits/stdc++.h>
using namespace std;

int ktrmax(int n)
{
    int smax = 0;
    if (n % 2 == 0)
    {
        smax = max(smax, n);
    }
    return smax;
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int nmax = 0;
    for (int i = 1; i <= n; ++i)
    {
        nmax = max(nmax, ktrmax(a[i]));
    }

    cout << nmax;

    return 0;
}
