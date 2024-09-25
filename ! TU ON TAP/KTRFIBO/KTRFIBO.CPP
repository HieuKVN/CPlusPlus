#include <bits/stdc++.h>
using namespace std;
bool fibo(int n)
{
    long long f1, f2, fn;
    if (n == 1 || n == 2)
        return true;
    for (long long i = 3; i <= n; i++)
    {
        fn = f1 + f2;
        f2 = fn;
        f1 = f2;
    }
    if (fn == n)
        return true;
    else
        return false;
}
int main()
{
    freopen("KTRFIBO.INP", "r", stdin);
    freopen("KTRFIBO.OUT", "w", stdout);
    int n;
    cin >> n;
    if (fibo(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}