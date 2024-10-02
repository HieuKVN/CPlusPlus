#include <bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int ktr(int n)
{
    int d = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            d++;
        }
    }
    return d;
}

int main()
{
    freopen("SODACBIET.INP", "r", stdin);
    freopen("SODACBIET.OUT", "w", stdout);

    int l, r;
    cin >> l >> r;
    int d1 = 0;

    for (int i = l; i <= r; i++)
    {
        if (snt(ktr(i)))
        {
            d1++;
        }
    }

    cout << d1 << endl;
    return 0;
}
