#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

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

    int s = 0;

    vector<int> res(n);

    for (int i = 0; i < n; i++)
    {
        s += a[i].first * b[i].first;
        res[a[i].second - 1] = b[i].second;
    }

    cout << s << endl;

    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}
