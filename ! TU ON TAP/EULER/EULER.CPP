#include <bits/stdc++.h>
using namespace std;

void euler(long long n)
{
    int d = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (__gcd(i, n) == 1)
        {
            d++;
        }
    }
    cout << d;
}

int main()
{
    freopen("EULER.INP", "r", stdin);
    freopen("EULER.OUT", "w", stdout);
    long long n;
    cin >> n;
    euler(n);
    return 0;
}