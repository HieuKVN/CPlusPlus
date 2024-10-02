#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DUAPOWB.INP", "r", stdin);
    freopen("DUAPOWB.OUT", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    int ac = pow(a, b);
    cout << ac % c;
    return 0;
}