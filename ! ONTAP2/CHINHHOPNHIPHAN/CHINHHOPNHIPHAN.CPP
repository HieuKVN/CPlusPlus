#include <bits/stdc++.h>
using namespace std;
#define nmax 100
int a[nmax], n, k;
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            xuat();
        }
        else
            Try(i + 1);
    }
}
int main()
{
    n = 2;
    Try(1);
    return 0;
}