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

int main()
{
    freopen("UOCNT.INP", "r", stdin);
    freopen("UOCNT.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int nmax = -1;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && snt(i))
            {
                nmax = max(nmax, i);
            }
        }
        cout << nmax << endl;
    }

    return 0;
}
