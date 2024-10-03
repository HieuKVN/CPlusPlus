#include <bits/stdc++.h>
using namespace std;

const long long NMAX = 1e7;
vector<int> f(NMAX + 1, 1);

void sanguoc(long long u)
{
    for (long long i = 1; i * i <= u; i++)
    {
        for (long long j = i * 2; j <= u; j += i)
        {
            f[j]++;
        }
    }
}

int main()
{
    freopen("MATMACANHO.INP", "r", stdin);
    freopen("MATMACANHO.OUT", "w", stdout);

    int n;
    cin >> n;

    sanguoc(NMAX);

    for (int i = 1; i <= NMAX; i++)
    {
        if (f[i] == n)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}