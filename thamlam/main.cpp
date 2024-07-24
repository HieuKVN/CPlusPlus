#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    int a[2 * n];
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n * 2 + 1, greater<int>());

    int s = 0;

    i = 1;
    while (i < 2 * n)
    {
        s = s + a[i] * a[i + 1];
        cout << a[i] << " " << a[i + 1] << endl;
        i = i + 2;
    }

    cout << s;

    return 0;
}