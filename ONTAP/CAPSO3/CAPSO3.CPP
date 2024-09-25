#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    freopen("CAPSO3.INP", "r", stdin);
    freopen("CAPSO3.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int d = 0;
    for (int l = 0; l < n - 1; ++l)
    {
        for (int r = l + 1; r < n; ++r)
        {
            int sum = a[l] + a[r];
            if (snt(sum))
            {
                d++;
            }
        }
    }
    cout << d;
    return 0;
}
