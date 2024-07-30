#include <bits/stdc++.h>
using namespace std;

struct farm
{
    int gia;
    int so_luong;
};

bool cmp(farm a, farm b)
{
    return a.gia < b.gia;
}

int main()
{
    int n, m;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n >> m;
    vector<farm> a(m);

    for (int i = 0; i < m; ++i)
    {
        cin >> a[i].gia >> a[i].so_luong;
    }

    sort(a.begin(), a.end(), cmp);

    int s = 0;
    int d = 0;

    for (int i = 0; i < m; ++i)
    {
        if (d >= n)
            break;

        int need = min(a[i].so_luong, n - d);
        s += need * a[i].gia;
        d += need;
    }

    cout << s << endl;
    return 0;
}
