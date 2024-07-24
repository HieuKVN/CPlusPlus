#include <bits/stdc++.h>
using namespace std;

long long a, b, n, i;

bool fibo(long long n)
{
    long long f1, f2, fn;
    if (n == 1 || n == 2)
        return true;
    else
    {
        f1 = 1;
        f2 = 1;
        fn = f1 + f2;
        i = 3;
        while (fn < n)
        {
            f1 = f2;
            f2 = fn;
            fn = f1 + f2;
        }
        if (fn == n)
            return true;
        else
            return false;
    }
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    if (fibo(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
