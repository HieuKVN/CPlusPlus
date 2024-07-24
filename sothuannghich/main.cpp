#include <bits/stdc++.h>
using namespace std;
long long s, i, n;

int dn(int n)
{
    int kq = 0;
    while (n > 0)
    {
        kq = kq * 10 + n % 10;
        n = n / 10;
    }
    return kq;
}

bool dx(int n)
{
    if (dn(n) == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (dx(a[i]))
            cout << a[i] << " ";
    }
    return 0;
}
