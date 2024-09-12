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

void Try(int i, int u)
{
    for (int j = u; j <= n; ++j)
    {
        a[i] = j;
        if (i == k)
        {
            xuat();
        }
        else if (i < k)
        {
            Try(i + 1, j + 1);
        }
    }
}

int main()
{
    freopen("DQQL_BAI6.INP", "r", stdin);
    freopen("DQQL_BAI6.OUT", "w", stdout);

    cin >> n >> k;
    cin >> s;
    for (i = 0; i <= s; i++)
    {
        cin >> a[i];
    }

    return 0;
}
