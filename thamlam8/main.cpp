#include <bits/stdc++.h>
using namespace std;

struct sx
{
    int id, dl;
};

bool cmp(sx x, sx y)
{
    return x.dl > y.dl;
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n;
    cin >> n;

    sx a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].dl;
        a[i].id = i + 1;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].dl << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i].id << " ";
    }

    // vector<int> res(n);

    // for (int i = 0; i < n; i++)
    // {
    //     res[i] = a[i].id;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << res[i] << " ";
    // }
    // cout << endl;

    return 0;
    thamlam9 copy
}
