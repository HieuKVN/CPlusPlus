#include <bits/stdc++.h>
using namespace std;
long long fibo(int n)
{
    int f1, f2, fn;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    f1 = 1;
    f2 = 1;
    while (fn <= n)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        if (fn >= n)
        {
            return f1;
        }
    }
    return fn;
}
int main()
{
    freopen("FIBONHOHONX.INP", "r", stdin);
    freopen("FIBONHOHONX.OUT", "w", stdout);
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}