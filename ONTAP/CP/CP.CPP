#include <bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool cp(int n)
{
    if (n < 1)
        return false;
    int res = sqrt(n);
    return res * res == n;
}

bool dpdb(int n)
{
    if (cp(n))
    {
        int res = sqrt(n);
        return snt(res);
    }
    return false;
}

int main()
{
    freopen("CP.INP", "r", stdin);
    freopen("CP.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;

    int d = 0;
    for (int i = n; i <= k; i++)
    {
        if (cpdb(i))
        {
            d++;
        }
    }

    cout << d;
    return 0;
}
