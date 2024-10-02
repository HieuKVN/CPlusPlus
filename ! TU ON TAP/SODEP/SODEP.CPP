#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SODEP.INP", "r", stdin);
    freopen("SODEP.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d = 0;
    for (int i = n; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
            {
                d++;
            }
        }
    }
    cout << d;
    return 0;
}
