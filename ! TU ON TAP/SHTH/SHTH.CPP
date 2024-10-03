#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
int n, x, i, k, a[nmax], b[nmax];
int f[nmax] = {0};
int d1 = 0, d2 = 0;
void xuly1()
{
    d1++;
    for (i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            return;
        }
    }
    cout << d1 << endl;
}
void xuly2()
{
    d2++;
    if (d2 == k)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!f[j])
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
            {
                xuly1();
                xuly2();
            }
            else
                Try(i + 1);
            f[j] = 0;
        }
    }
}
int main()
{
    freopen("SHTH.INP", "r", stdin);
    freopen("SHTH.OUT", "w", stdout);
    while (cin >> x)
    {
        b[++n] = x;
    }
    k = b[n];
    n--;
    Try(1);
    return 0;
}