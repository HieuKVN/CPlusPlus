#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if (n <= 1)
        return false;
    int sum = 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i && i != 1)
            {
                sum += n / i;
            }
        }
    }
    return sum == n;
}
int main()
{
    int n;
    freopen("SOHOANHAO.INP", "r", stdin);
    freopen("SOHOANHAO.OUT", "w", stdout);
    cin >> n;
    int d = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (check(i))
        {
            cout << i << " ";
            ++d;
        }
    }
    cout << endl
         << d << endl;
    return 0;
}
