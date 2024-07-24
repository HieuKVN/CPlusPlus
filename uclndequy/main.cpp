#include <bits/stdc++.h>

using namespace std;

int gcddequy(int a, int b)
{
    if (b == 0)
        return a;
    else
        return (b, a % b);
}

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
    bcnn = (a * b) / gcddequy(a, b);
    return bcnn;
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cout << "De Quy: " << gcddequy(9, 6) << endl;
    cout << "Eclip: " << gcdeclip(9, 6) << endl;
    cout << lcm(9, 6);
}
