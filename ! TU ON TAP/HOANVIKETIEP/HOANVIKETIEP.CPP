#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void xuly()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    freopen("HOANVIKETIEP.INP", "r", stdin);
    freopen("HOANVIKETIEP.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    xuly();
    return 0;
}
