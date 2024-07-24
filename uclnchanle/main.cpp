#include <bits/stdc++.h>

using namespace std;

int gcddequy(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcddequy(b, a % b);
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
    int a, b, t;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (gcddequy(a, b) % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
}
