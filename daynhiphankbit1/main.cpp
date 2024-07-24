#include <bits/stdc++.h>
using namespace std;

int a[100];
int n, k;

void xuat()
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
            int d = 0;
            for (int l = 1; l <= n; l++)
            {

                if (a[l] == 1)
                {
                    d++;
                }
            }
            if (d == k)
            {
                xuat();
            }
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
    cin >> n >> k;
    Try(1);
    return 0;
}