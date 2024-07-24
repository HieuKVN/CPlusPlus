#include <bits/stdc++.h>

using namespace std;

int a[1000];
int f[1000] = {0};
int b[1000];
int n, k, x;
int d1 = 0;
int d2 = 0;

void xuly1()
{
    d1++;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return;
    }
    cout << d1 << endl;
    return;
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
        return;
    }
}

void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try1(int i)
{
    for (int j = 1; j <= n; j++)
        if (f[j] == 0)
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
            {
                xuly1();
            }
            else
                Try1(i + 1);
            f[j] = 0;
        }
}

void Try2(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!f[j])
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
            {
                xuly2();
            }
            else
                Try2(i + 1);
            f[j] = 0;
        }
    }
}

int main()
{
    freopen("hvi.inp", "r", stdin);
    freopen("hvi.out", "w", stdout);

    while (cin >> x)
    {
        b[++n] = x;
    }
    k = b[n];

    n--;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    Try1(1);
    Try2(1);

    return 0;
}
