#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CAPSO2.INP", "r", stdin);
    freopen("CAPSO2.OUT", "w", stdout);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int d = 0;
    for (int l = 0; l < n - 1; ++l)
    {
        for (int r = l + 1; r < n; ++r)
        {
            if (a[l] + a[r] == x)
            {
                ++d;
            }
        }
    }
    cout << d;
    return 0;
}
