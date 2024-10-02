#include <bits/stdc++.h>
using namespace std;

void check(int M)
{
    int d500 = 0, d200 = 0, d100 = 0;
    int d50 = 0, d20 = 0, d10 = 0;
    int d = 0;

    if (M >= 500000)
    {
        d500 = M / 500000;
        M %= 500000;
        d += d500;
    }

    if (M >= 200000)
    {
        d200 = M / 200000;
        M %= 200000;
        d += d200;
    }

    if (M >= 100000)
    {
        d100 = M / 100000;
        M %= 100000;
        d += d100;
    }

    if (M >= 50000)
    {
        d50 = M / 50000;
        M %= 50000;
        d += d50;
    }

    if (M >= 20000)
    {
        d20 = M / 20000;
        M %= 20000;
        d += d20;
    }

    if (M >= 10000)
    {
        d10 = M / 10000;
        M %= 10000;
        d += d10;
    }

    cout << d << endl;
    cout << d10 << " " << d20 << " " << d50 << " " << d100 << " " << d200 << " " << d500 << endl;
}

int main()
{
    freopen("ATM.INP", "r", stdin);
    freopen("ATM.OUT", "w", stdout);
    int M;
    cin >> M;
    check(M);
    return 0;
}
