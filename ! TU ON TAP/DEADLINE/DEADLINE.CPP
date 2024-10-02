#include <bits/stdc++.h>
using namespace std;

struct cv
{
    int id, dl, ln;
};

bool cmp(cv x, cv y)
{
    return (x.ln > y.ln);
}
int main()
{
    freopen("DEADLINE.INP", "r", stdin);
    freopen("DEADLINE.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<cv> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].dl >> a[i].ln;
        a[i].id = i + 1;
    }
    sort(a.begin(), a.end(), cmp);
    int s = 0;

    int kq[100] = {0};
    bool check[100] = {false};

    for (int i = 0; i < n; i++)

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

    for (int i = 0; i < n; i++)
    {
        if (check[i] == true)
        {
            cout << a[kq[i]].id << " ";
        }
    }

    return 0;
}
