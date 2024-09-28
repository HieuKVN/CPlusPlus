#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
long long f[nmax];
int k, a, b;
vector<int> res;
int d = 0;
void sang(long long u)
{
    long long j;
    for (long long i = 0; i <= u; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (j = i * i; j <= u; j += i)
                f[j] = 0;
        }
    }
}

bool kfactor(int n)
{

    for (int x : res)
    {
        while (n % x == 0)
        {
            n /= x;
        }
    }
    if (n == 1)
    {
        return true;
    }
    return false;
}

int main()
{
    freopen("KFACTOR.INP", "r", stdin);
    freopen("KFACTOR.OUT", "w", stdout);

    cin >> k >> a >> b;
    sang(k);

    for (int i = 1; i <= k; i++)
    {
        if (f[i])
        {
            res.push_back(i);
        }
    }

    for (int i = a; i <= b; i++)
    {
        if (kfactor(i))
        {
            d++;
        }
    }
    cout << d << " ";
    return 0;
}