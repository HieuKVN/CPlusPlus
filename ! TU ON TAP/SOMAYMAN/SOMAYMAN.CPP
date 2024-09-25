#include <bits/stdc++.h>
using namespace std;
#define nmax 1000
bool ktr(int n)
{
    while (n > 0)
    {
        int kt = n % 10;
        if (kt != 7 && kt != 4)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    freopen("SOMAYMAN.INP", "r", stdin);
    freopen("SOMAYMAN.OUT", "w", stdout);
    int n;
    cin >> n;
    if (ktr(n))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}