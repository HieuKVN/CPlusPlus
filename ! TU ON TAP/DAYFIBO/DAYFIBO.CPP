#include <bits/stdc++.h>
using namespace std;
long long fibo(long long n)
{
    long long f1, f2, fn;
    if (n == 1 || n == 2)
        return 1;
    f1 = 1, f2 = 1;
    for (long long i = 3; i <= n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}
int main()
{
    freopen("DAYFIBO.INP", "r", stdin);
    freopen("DAYFIBO.OUT", "w", stdout);
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << fibo(i) << " ";
    }
    return 0;
}