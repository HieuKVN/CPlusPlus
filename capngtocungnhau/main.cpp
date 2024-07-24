#include <bits/stdc++.h>
using namespace std;

long long s, i, n;

int gcddequy(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcddequy(b, a % b);
}

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
        for (int j = 0; j < i; j++)
        {
            if (a[i] && a[j])
            {
                if (gcddequy(a[i], a[j]) == 1)
                {
                    cout << "(" << a[j] << "," << a[i] << ")" << endl;
                }
            }
        }
    }

    return 0;
}
