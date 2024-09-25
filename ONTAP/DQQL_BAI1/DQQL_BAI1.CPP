#include <bits/stdc++.h>
using namespace std;
#define Nmax 1000009
int a[Nmax];
int f[Nmax] = {0};
int n;
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
    for (int j = 1; j <= n; ++j)
    {
        if (f[j] == 0)
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
            {
                xuat();
            }
            else
            {
                Try(i + 1);
            }
            f[j] = 0;
        }
    }
}
int main()
{
    freopen("DQQL_BAI1.INP", "r", stdin);
    freopen("DQQL_BAI1.OUT", "w", stdout);
    cin >> n;
    Try(1);
    return 0;
}
