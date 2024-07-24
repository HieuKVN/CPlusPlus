#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int dem = 1;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i - 1])
            dem++;
        else
        {
            cout << a[i - 1] << " : " << dem << endl;
            dem = 1;
        }
    }

    return 0;
}