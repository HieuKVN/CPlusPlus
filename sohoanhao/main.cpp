#include <bits/stdc++.h>

using namespace std;

bool hoanhao(int n)
{
    int s = 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            s += i;
            if (i != n / i)
            {
                s += n / i;
            }
        }
    }
    if (s == n)
        return true;
    else
        return false;
}

int main()
{
    int n, i;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    int a[n];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (hoanhao(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}
