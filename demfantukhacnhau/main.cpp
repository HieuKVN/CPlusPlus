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

    int dem = 0;

    for (int i = 0; i < n; i++)
    {
        bool ktr = true;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                ktr = false;
                break;
            }
        }
        if (ktr)
        {

            dem++;
        }
    }

    cout << dem;
    return 0;
}
