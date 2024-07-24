#include <bits/stdc++.h>
using namespace std;

int gcdeclip(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    int bcnn;
    bcnn = (a * b) / gcdeclip(a, b);
    return bcnn;
}

int main()
{
    int x, y, z, n;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> x >> y >> z;

    int dem = 1;

    dem = x / lcm(y, z);

    cout << dem;

    return 0;
}