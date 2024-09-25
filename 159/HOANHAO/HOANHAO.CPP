#include <bits/stdc++.h>
using namespace std;
int tonguoc(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    freopen("HOANHAO.INP", "r", stdin);
    freopen("HOANHAO.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int sum = tonguoc(a[i]);
        if (sum == a[i])
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
