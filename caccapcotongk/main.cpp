#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int dem = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << a[j] << a[i] << endl;
                break;
            }
        }
    }

    return 0;
}
