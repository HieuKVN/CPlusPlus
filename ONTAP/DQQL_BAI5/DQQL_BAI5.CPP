#include <bits/stdc++.h>
using namespace std;
#define Nmax 1000009

int a[Nmax];
int n, k;
int d = 0;

void xuat()
{
    for (int i = 1; i <= k; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            xuat();
        else
            Try(i + 1);
    }
}

int main()
{
    freopen("DQQL_BAI5.INP", "r", stdin);
    freopen("DQQL_BAI5.OUT", "w", stdout);
    cin >> n >> k;
    Try(1);
    return 0;
}
