#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int s = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] - i > 0)
        {
            s += a[i] - i;
        }
    }

    cout << s << endl;
    return 0;
}
