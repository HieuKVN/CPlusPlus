#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CAPSO1.INP", "r", stdin);
    freopen("CAPSO1.OUT", "w", stdout);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int d = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] + a[i + 1] == x)
        {
            ++d;
        }
    }
    cout << d;
    return 0;
}
