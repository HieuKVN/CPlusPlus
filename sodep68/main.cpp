#include <bits/stdc++.h>

using namespace std;

bool ktr(int num)
{
    bool check = false;

    while (num > 0)
    {
        int n = num % 10;
        if (n == 6 && n == 8)
        {
            check = true;
        }
        num /= 10;
    }

    return (check);
}

int main()
{
    int m, n, i;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dem = 0;

    for (i = 0; i <= n; i++)
    {
        if (ktr(a[i]))
        {
            dem++;
        }
    }
    cout << dem;

    return 0;
}
