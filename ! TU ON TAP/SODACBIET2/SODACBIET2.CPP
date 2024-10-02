#include <bits/stdc++.h>
using namespace std;

int ktr(int n)
{
    int s = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    freopen("SODACBIET2.INP", "r", stdin);
    freopen("SODACBIET2.OUT", "w", stdout);
    int l, r;
    cin >> l >> r;
    int d = 0;

    for (int i = l; i <= r; i++)
    {
        if (ktr(i) > i)
        {
            d++;
        }
    }

    cout << d << endl;
    return 0;
}
