#include <bits/stdc++.h>
using namespace std;

struct cv
{
    int id, batdau, ketthuc, tien;
};

bool cmp(cv a, cv b)
{
    return a.ketthuc < b.ketthuc;
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    vector<cv> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].batdau >> a[i].ketthuc >> a[i].tien;
        a[i].id = i + 1;
    }

    sort(a.begin(), a.end(), cmp);

    vector<int> f(n, 0);
    vector<int> vet(n, -1);

    for (int i = 0; i < n; i++)
    {
        f[i] = a[i].tien;
        for (int j = 0; j < i; j++)
        {
            if (a[j].ketthuc < a[i].batdau && f[i] < f[j] + a[i].tien)
            {
                f[i] = f[j] + a[i].tien;
                vet[i] = j;
            }
        }
    }

    int maxx = 0, vt = 0;
    for (int i = 0; i < n; i++)
    {
        if (f[i] > maxx)
        {
            maxx = f[i];
            vt = i;
        }
    }

    vector<int> res;
    while (vt != -1)
    {
        res.push_back(a[vt].id);
        vt = vet[vt];
    }

    cout << res.size() << " " << maxx << endl;

    // for (int i = res.size() - 1; i >= 0; i--)
    // {
    //     cout << res[i] << " ";
    // }

    reverse(res.begin(), res.end());

    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}
