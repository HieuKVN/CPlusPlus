#include <bits/stdc++.h>
using namespace std;
#define Nmax 1000009
int a[Nmax];
int n, m;
int d = 0;
void xuat()
{
    d++;
    cout << "{";
    for (int i = 1; i <= m; ++i)
    {
        cout << a[i];
        if (i < m)
            cout << ", ";
    }
    cout << "}" << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - m + i; j++)
    {
        a[i] = j;
        if (i == m)
            xuat();
        else
            Try(i + 1);
    }
}
int main()
{
    freopen("SILICON.INP", "r", stdin);
    freopen("SILICON.OUT", "w", stdout);
    cin >> n >> m;
    Try(1);
    cout << d;
    return 0;
}
