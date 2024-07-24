#include <bits/stdc++.h>
using namespace std;

int a[1000];
int f[1000] = {0};
int b[1000];
int n, k;
int d = 0;

void xuly1()
{
    d++;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            return;
        }
    }
    cout << d << endl;
    return;
}

void xuly2()
{

    d++;
    if (d == k)
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
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    cin >> k;

    Try(1);

    return 0;
}
