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
bool ktr(int n)
{
    if (!snt[n])
        return false;
    while (n > 0)
    {
        if (!snt[n])
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    freopen("SUPER.INP", "r", stdin);
    freopen("SUPER.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (ktr(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
