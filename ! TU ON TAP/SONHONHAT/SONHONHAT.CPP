#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SONHONHAT.INP", "r", stdin);
    freopen("SONHONHAT.OUT", "w", stdout);

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {                             // Bắt đầu từ 1 để tránh 0
        long long ii = pow(i, i); // Tính i^i
        if (ii % n == 0)
        {
            cout << i << " ";
            break;
        }
    }

    return 0;
}
