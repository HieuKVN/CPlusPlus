#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PETROL.INP", "r", stdin);
    freopen("PETROL.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    int d = 0;
    int s = k;

    while (s > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s >= a[i])
            {
                d++;
                s -= a[i];
                break;
            }
        }
    }
    cout << d;
    return 0;
}
