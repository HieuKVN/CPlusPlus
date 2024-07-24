#include <bits/stdc++.h>
using namespace std;

int a[1000];
int n, k, x, j;

void xuly()
{
    int i = n - 1;
    while (i > 0 && a[i] >= a[i + 1])
    {
        i--;
    }

    if (i <= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        int j = n;
        while (a[j] <= a[i])
        {
            j--;
        }
        swap(a[i], a[j]);
        int l = i + 1;
        int r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    xuly();
    return 0;
}
