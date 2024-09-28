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
    int d = 0;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
    }

    cout << d << endl;
    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}