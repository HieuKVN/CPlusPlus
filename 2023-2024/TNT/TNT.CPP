#include <bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    freopen("TNT.INP", "r", stdin);
    freopen("TNT.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (snt(a[i]) == true)
        {
            s = s + a[i];
        }
    }

    cout << "Tong cac so nguyen to trong day: " << s;

    return 0;
}