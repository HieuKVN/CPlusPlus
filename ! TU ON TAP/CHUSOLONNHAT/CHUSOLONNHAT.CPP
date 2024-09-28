#include <bits/stdc++.h>
using namespace std;

void xuly(int n)
{
    int nmaxx = 0;
    while (n > 0)
    {
        int kt = n % 10;
        if (kt > nmaxx)
        {
            nmaxx = kt;
        }
        n /= 10;
    }
    cout << nmaxx;
}

int main()
{
    freopen("CHUSOLONNHAT.INP", "r", stdin);
    freopen("CHUSOLONNHAT.OUT", "w", stdout);
    int n;
    cin >> n;
    xuly(n);
    return 0;
}