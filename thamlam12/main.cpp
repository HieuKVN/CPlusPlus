#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;
    vector<int> sua(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> sua[i];
    }

    sort(sua.rbegin(), sua.rend());

    int s = 0;

    for (int i = 0; i < n; ++i)
    {
        if (sua[i] - i > 0)
        {
            s += sua[i] - i;
        }
    }

    cout << s << endl;
    return 0;
}
