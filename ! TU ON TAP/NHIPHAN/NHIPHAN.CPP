#include <bits/stdc++.h>
using namespace std;

#define nmax 100000

int n, x, i;
int a[nmax];
int f[nmax] = {0};

void Xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            Xuat();
        }
        else
            Try(i + 1);
        f[j] = 0;
    }
}

int main()
{
    freopen("NHIPHAN.INP", "r", stdin);
    freopen("NHIPHAN.OUT", "w", stdout);

    cin >> n;

    Try(1);

    return 0;
}