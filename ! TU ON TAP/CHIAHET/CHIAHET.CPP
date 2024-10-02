#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CHIAHET.INP", "r", stdin);
    freopen("CHIAHET.OUT", "w", stdout);
    int k, a, b, d = 0;
    cin >> k >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i % k == 0)
        {
            d++;
        }
    }
    cout << d;
    return 0;
}
