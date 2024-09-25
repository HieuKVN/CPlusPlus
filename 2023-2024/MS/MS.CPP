#include <bits/stdc++.h>
using namespace std;
int demUoc(int n)
{
    int d = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                d += 1;
            }
            else
            {
                d += 2;
            }
        }
    }
    return d;
}
int main()
{
    freopen("MS.INP", "r", stdin);
    freopen("MS.OUT", "w", stdout);
    int n;
    cin >> n;
    int i = 1;
    while (demUoc(i) != n)
    {
        i++;
    }
    cout << i << endl;
    return 0;
}
