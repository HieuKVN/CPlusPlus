#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BUS.INP", "r", stdin);
    freopen("BUS.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    int s = 0;
    vector<int> res(n);
    for (int i = 0; i < k; i++)
    {
        s = s + a[i].first;
    }
    cout << s;
    return 0;
}
