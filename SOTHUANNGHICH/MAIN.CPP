#include <bits/stdc++.h>
using namespace std;
// Hàm đảo ngược số
int dn(int n)
{
    int kq = 0;
    while (n > 0)
    {
        kq = kq * 10 + n % 10;
        n = n / 10;
    }
    return kq;
}
// Hàm kiểm tra số đối xứng
bool dx(int n)
{
    return dn(n) == n;
}
int main()
{
    int n;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // In các số đối xứng
    for (int i = 0; i < n; i++)
    {
        if (dx(a[i]))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
