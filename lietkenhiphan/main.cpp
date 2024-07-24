#include <bits/stdc++.h>
using namespace std;

int a[100];
int n;
int d = 0;

void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            xuat();
            d++;
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    Try(1);
    cout << d;
    return 0;
}
