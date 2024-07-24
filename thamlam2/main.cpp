#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, m;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    cin >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int s = 0;
    int t = m;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= t)
        {
            s++;
            t = t - a[i];
        }
        else
        {
            break;
        }
    }

    cout << s << endl
         << t;

    return 0;
}