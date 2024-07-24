#include <bits/stdc++.h>
using namespace std;

struct hd
{
    int start;
    int finish;
    int id;
};

bool cmp(hd a, hd b)
{
    return a.finish < b.finish;
}

int main()
{
    int n, i;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    hd a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].start;
        a[i].id = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].finish;
    }

    sort(a + 1, a + n + 1, cmp);

    int d = 1;

    int j = 1;

    vector<int> res;

    res.push_back(a[1].id);

    for (int i = 2; i <= n; i++)
    {
        if (a[j].finish <= a[i].start)
        {
            d++;
            res.push_back(a[i].id);
            j = i;
        }
    }

    cout << d << endl;

    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}