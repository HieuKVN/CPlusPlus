#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("UOCSO.INP", "r", stdin);
    freopen("UOCSO.OUT", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m;
        int a = n * m;

        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                d++;
            }
        }
        cout << d << endl;
        d = 0;
    }
    return 0;
}
