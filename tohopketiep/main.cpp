#include <iostream>
using namespace std;

int n, k;
int a[1000];

void xuly()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
    {
        i--;
    }

    if (i <= 0)
    {
        for (i = 1; i <= k; i++)
            cout << i << " ";
        cout << endl;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }

    xuly();

    return 0;
}
