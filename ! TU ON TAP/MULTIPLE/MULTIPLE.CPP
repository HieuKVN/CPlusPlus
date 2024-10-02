#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MULTIPLE.INP", "r", stdin);
    freopen("MULTIPLE.OUT", "w", stdout);

    int n, q;
    cin >> n >> q;
    int s = 0;
    int ht = 1;
    for (int i = 1; i <= n; i++)
    {
        s += ht;
        ht *= q;
    }
    cout << s << endl;

    return 0;
}
