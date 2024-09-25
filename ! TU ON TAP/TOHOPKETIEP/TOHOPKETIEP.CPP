#include <bits/stdc++.h>
using namespace std;
#define nmax 1000
int n, k, i, f[nmax] = {0}, a[nmax], b[nmax];
int d = 0;
void xuly()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        for (i = 1; i <= k; i++)
            cout << i << " ";
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (i = 1; i <= k; i++)
            cout << a[i] << " ";
    }
}
int main()
{
    freopen("TOHOPKETIEP.INP", "r", stdin);
    freopen("TOHOPKETIEP.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    xuly();
    return 0;
}