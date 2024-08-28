
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    freopen("THAMQUAN.INP", "r", stdin);
    freopen("THAMQUAN.OUT", "w", stdout);

    cin >> n >> m;

    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].first;
        d[i].second = i + 1;
    }

    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(d.begin(), d.end(), greater<pair<int, int>>());

    sort(v.begin(), v.end());

    int s = 0;

    vector<int> res(n);

    for (int i = 0; i < n; i++)
    {
        s += d[i].first * v[i].first;
        res[d[i].second - 1] = v[i].second;
    }

    cout << s << endl;

    for (int x : res)
    {
        cout << x << endl;
    }

    return 0;
}
