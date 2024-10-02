#include <bits/stdc++.h>
using namespace std;
long long n;
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool fibo(long long n)
{
    if (n <= 0)
        return false;
    long long f1 = 0, f2 = 1, fn = f1 + f2;
    while (fn < n)
    {
        f1 = f2;
        f2 = fn;
        fn = f1 + f2;
    }
    return fn == n;
}
int main()
{
    freopen("NTFIBO.INP", "r", stdin);
    freopen("NTFIBO.OUT", "w", stdout);
    cin >> n;
    for (long long i = 10; i <= n; i++)
    {
        if (snt(i) && fibo(i))
            cout << i << " ";
    }
    return 0;
}
