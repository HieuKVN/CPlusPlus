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
bool cp(int n)
{
    if (n < 1)
        return false;
    int res = sqrt(n);
    return res * res == n;
}
bool cpdb(int n)
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
