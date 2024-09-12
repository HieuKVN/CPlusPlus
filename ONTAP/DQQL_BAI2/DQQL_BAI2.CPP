#include <bits/stdc++.h>
using namespace std;

#define Nmax 1000009

int a[Nmax];
int n;
int d = 0;

void xuat()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        a[i] = j;
        if (i == n)
        {
            xuat();
            ++d;
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    freopen("DQQL_BAI2.INP", "r", stdin);
    freopen("DQQL_BAI2.OUT", "w", stdout);

    cin >> n;
    Try(1);

    return 0;
}
