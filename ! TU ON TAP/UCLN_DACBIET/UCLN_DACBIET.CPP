#include <bits/stdc++.h>
using namespace std;

vector<int> res;

void xuly(int a, int b)
{
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res.push_back(i);
        }
    }

    int s = 0;
    int maxx = 0;
    for (int x : res)
    {
        int ress = x;
        int s = 0;
        while (ress > 0)
        {
            while (ress > 0)
            {
                s += ress % 10;
                ress /= 10;
            }
            if (s > maxx)
            {
                maxx = s;
            }
        }
    }
    cout << maxx;
}

int main()
{
    freopen("UCLN_DACBIET.INP", "r", stdin);
    freopen("UCLN_DACBIET.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    xuly(n, k);
    return 0;
}