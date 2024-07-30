#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s >= a[i])
        {
            s += a[i];
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
