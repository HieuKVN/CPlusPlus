#include <bits/stdc++.h>
using namespace std;

const int Nmax = 1000009;
int a[Nmax];
int n, d = 0;

void Xuat()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << (a[i] == 0 ? 'b' : 'w');
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
            Xuat();
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
    freopen("DQQL_BAI8.INP", "r", stdin);
    freopen("DQQL_BAI8.OUT", "w", stdout);
    cin >> n;
    Try(1);
    cout << d;
    return 0;
}
