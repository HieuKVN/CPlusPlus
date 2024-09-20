#include <bits/stdc++.h>
using namespace std;
#define Nmax 300

int a[Nmax];
int n, k;
int d = 0;

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            d++;
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    freopen("CHIAL.INP", "r", stdin);
    freopen("CHIAL.OUT", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
        cout << d << endl;
    }
    return 0;
}
