#include <iostream>
using namespace std;

int a[1000];
int b[1000];
int n, k;
int d = 0;

void xuat()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        a[i] = b[j];
        if (i == k)
        {
            xuat();
            d++
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    Try(1);
    cout << d;
    return 0;
}
