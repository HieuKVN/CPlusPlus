#include <bits/stdc++.h>
using namespace std;
int d = 0;
bool cp(int n)
{
    int res = sqrt(n);
    if (res * res == n)
    {
        return true;
    }
    return false;
}
void xuly(int n)
{
    int s = 0;
    while (n > 0)
    {
        int kt = n % 10;
        cout << kt << endl;
        if (cp(n))
        {
            d++;
            cout << kt << endl;
        }
        n /= 10;
    }
    cout << d;
}
int main()
{
    freopen("TONGCP.INP", "r", stdin);
    freopen("TONGCP.OUT", "w", stdout);
    int n;
    cin >> n;
    xuly(n);
    return 0;
}