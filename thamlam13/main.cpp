#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;
    vector<int> do_cung(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> do_cung[i];
    }

    sort(do_cung.begin(), do_cung.end());

    int chieu_cao = 0;

    for (int i = 0; i < n; ++i)
    {
        if (do_cung[i] >= chieu_cao)
        {
            chieu_cao++;
        }
    }

    cout << chieu_cao << endl;
    return 0;
}