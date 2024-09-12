#include <bits/stdc++.h>
using namespace std;

#define nmax 100000

int a[nmax];
int f[nmax] = {0};
int n, k;
int d = 0;

void xuat()
{
    for (int i = 1; i <= k; ++i)
    {
        cout << a[f[i]];
    }
    cout << " ";
    ++d;
}

void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        bool ktr = true;
        for (int l = 1; l < i; ++l)
        {
            if (f[l] == j)
            {
                ktr = false;
                break;
            }
        }
        if (ktr)
        {
            f[i] = j;
            if (i == k)
            {
                xuat();
            }
            else
            {
                Try(i + 1);
            }
            f[i] = 0;
        }
    }
}

int main()
{
    freopen("DQQL_BAI3.INP", "r", stdin);
    freopen("DQQL_BAI3.OUT", "w", stdout);

    cin >> k >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    Try(1);

    cout << endl
         << d;
    return 0;
}
