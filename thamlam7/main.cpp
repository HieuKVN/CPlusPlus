#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id, dl, ln;
};

bool cmp(Job x, Job y)
{
    return (x.ln > y.ln);
}

int main()
{

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n, i;

    cin >> n;

    Job a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i].id >> a[i].dl >> a[i].ln;
    }

    sort(a, a + n, cmp);

    int s = 0;

    int kq[n] = {0};
    bool check[n] = {false};

    for (i = 0; i < n; i++)

    {
        for (int j = min(n, a[i].dl); j >= 1; j--)
        {
            if (check[j] == false)
            {
                check[j] = true;
                kq[j] = i;
                s += a[i].ln;
                break;
            }
        }
    }

    cout << s << endl;

    for (i = 0; i < n; i++)
    {
        if (check[i] == true)
        {
            cout << a[kq[i]].id << " ";
        }
    }

    return 0;
}
