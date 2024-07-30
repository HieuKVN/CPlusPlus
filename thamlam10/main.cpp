#include <bits/stdc++.h>
using namespace std;

struct rong
{
    int sucmanh;
    int chiso;
};

bool cmp(rong a, rong b)
{
    return a.sucmanh < b.sucmanh;
}

int main()
{
    int n, s;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n >> s;

    rong a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].sucmanh >> a[i].chiso;
    }

    sort(a, a + n, cmp);

    bool tieudiet = true;
    int chuaTieuDiet = 0;
    int d = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s > a[i].sucmanh)
        {
            s += a[i].chiso;
            d++;
        }
        else
        {
            tieudiet = false;
            chuaTieuDiet = s - d;
            break;
        }
    }

    if (tieudiet)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        cout << chuaTieuDiet << endl;
    }

    return 0;
}
