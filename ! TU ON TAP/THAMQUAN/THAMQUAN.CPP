#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("THAMQUAN.INP", "r", stdin);
    freopen("THAMQUAN.OUT", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    vector<pair<int, int>> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i].first;
        b[i].second = i + 1;
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());

    sort(b.begin(), b.end());

    vector<int> res(n);

    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s += a[i].first * b[i].first;
        res[a[i].second - 1] = b[i].second;
    }

    cout << s << endl;

    for (int x : res)
    {
        cout << x << endl;
    }

    return 0;
}
