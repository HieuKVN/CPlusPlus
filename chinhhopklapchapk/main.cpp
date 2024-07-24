#include <bits/stdc++.h>
using namespace std;

int a[1000];
int f[1000] = {0};
int b[1000];
int n, k;
int d = 0;

void xuat()
{
    for (int i = 1; i <= k; i++)
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
            if (i == k)
            {
                xuat();
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
    cin >> n >> k;

    Try(1);

    return 0;
}