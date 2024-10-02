#include <bits/stdc++.h>
using namespace std;

const long long nmax = 1e6;

vector<bool> f(nmax, true);

void sang(long long u)
{
    f[0] = f[1] = false;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (long long j = i * i; j < u; j += i)
            {
                f[j] = false;
            }
        }
    }
}

int check(int n)
{
    while (n > 0)
    {
        int kt = n % 10;
        if (f[kt])
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    freopen("SOPHANNGUYENTO.INP", "r", stdin);
    freopen("SOPHANNGUYENTO.OUT", "w", stdout);
    sang(nmax);
    int a, b, c;
    cin >> a >> b >> c;
    cout << check(a) << " " << check(b) << " " << check(c);
    return 0;
}
