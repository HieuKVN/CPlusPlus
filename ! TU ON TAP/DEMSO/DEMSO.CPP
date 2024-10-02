#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DEMSO.INP", "r", stdin);
    freopen("DEMSO.OUT", "w", stdout);
    long long a, b, c;
    long long d = 0;
    cin >> a >> b >> c;
    for (long long i = a; i <= b; i++)
    {
        if (i % c != 0)
        {
            d++;
        }
    }
    cout << d;
    return 0;
}
