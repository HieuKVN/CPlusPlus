#include <bits/stdc++.h>
using namespace std;

long long i, n;

int fibo(long long n)
{
    long long f1, f2, fn;
    if (n == 1 || n == 2)
        return 1;
    else
    {
        f1 = 1;
        f2 = 1;
        fn = f1 + f2;
        i = 3;
        while (i < n)
        {
            f1 = f2;
            f2 = fn;
            fn = f1 + f2;
            i = i + 1;
        }
    }
    return fn;
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    cout << fibo(n);
    return 0;
}
