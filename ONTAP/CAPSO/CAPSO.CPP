#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    freopen("CAPSO.INP", "r", stdin);
    freopen("CAPSO.OUT", "w", stdout);
    int n, m;
    while (cin >> n >> m)
    {
        cout << gcd(n, m) << endl;
    }
    return 0;
}
