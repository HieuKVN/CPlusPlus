#include <bits/stdc++.h>
using namespace std;
int a[1000];
int f[1000] = {0};
string k;

void xuat()
{
    for (int i = 1; i <= k.size(); i++)
    {
        cout << k[a[i]];
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j <= k.size() - 1; j++)
    {
        if (!f[j])
        {
            a[i] = j;
            f[j] = 1;
            if (i == k.size())
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
    cin >> k;
    Try(1);
    return 0;
}
