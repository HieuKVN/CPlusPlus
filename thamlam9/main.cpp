#include <bits/stdc++.h>
using namespace std;

struct Xe
{
    int phat;
    int time;
    int id;
};

bool cmp(Xe x, Xe y)
{

    long long tilex = x.phat / x.time;
    long long tiley = y.phat / y.time;
    return tilex > tiley;
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n;
    cin >> n;

    vector<Xe> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].phat;
        a[i].id = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].time;
    }

    sort(a.begin(), a.end(), cmp);

    long long tong_phat = 0;
    long long thoi_gian = 0;

    vector<int> res(n);

    for (int i = 0; i < n; i++)
    {
        res[i] = a[i].id;
        thoi_gian += a[i].time;
        tong_phat += thoi_gian * a[i].phat;
    }

    cout << tong_phat << endl;

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
