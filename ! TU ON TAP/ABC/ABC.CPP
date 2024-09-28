#include <bits/stdc++.h>
using namespace std;

int d = 0;

void ktr(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0)
    {
        d++;
    }
}

int main()
{
    freopen("ABC.INP", "r", stdin);
    freopen("ABC.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int k1 = 0, k2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                ktr(x[i], y[i], x[j], y[j], x[k], y[k]);
            }
        }
    }
    cout << d;
    return 0;
}