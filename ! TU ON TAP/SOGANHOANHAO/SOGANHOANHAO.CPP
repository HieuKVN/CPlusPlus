#include <bits/stdc++.h>
using namespace std;

int uoc(int t)
{
    int s = 0;
    for (int i = 1; i <= t; i++)
    {
        if (t % i == 0)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    freopen("SOGANHOANHAO.INP", "r", stdin);
    freopen("SOGANHOANHAO.OUT", "w", stdout);

    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (2 * a[i] <= uoc(a[i]))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
