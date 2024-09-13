#include <bits/stdc++.h>
using namespace std;
#define Nmax 300

int a[Nmax];
int b[Nmax];
int n, k, S;
int cnt = 0;

void xuat()
{
    cnt++;
    if (cnt == S)
    {
        for (int i = 1; i <= k; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            xuat();
        }
        else
        {
            Try(i + 1);
        }
    }
}

int tim_so_hieu()
{
    int so_hieu = 0;
    for (int i = 1; i <= k; i++)
    {
        so_hieu += b[i] - i;
    }
    return so_hieu + 1;
}

int main()
{
    freopen("DQQL_BAI6.INP", "r", stdin);
    freopen("DQQL_BAI6.OUT", "w", stdout);

    cin >> n >> k >> S;
    for (int i = 1; i <= k; i++)
    {
        cin >> b[i];
    }

    Try(1);

    cout << tim_so_hieu() << endl;

    return 0;
}
