#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("HALF.INP", "r", stdin);
    freopen("HALF.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    vector<vector<int>> c(n + 1, vector<int>(m + 1, 0));
    int max_a = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] > max_a)
            {
                max_a = a[i][j];
            }
        }
    }
    // Khởi tạo mảng b
    int max_size = 400 * max_a;
    vector<vector<int>> b(4, vector<int>(max_size + 1, 0));
    int tong = 0;
    // Tính toán khả năng đạt được tổng các phần tử
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            for (int k = tong; k >= 1; --k)
            {
                if (b[1][k] > 0 && b[1][k + a[i][j]] == 0)
                {
                    b[1][k + a[i][j]] = 1;
                    b[2][k + a[i][j]] = i;
                    b[3][k + a[i][j]] = j;
                }
            }
            tong += a[i][j];
            if (b[1][a[i][j]] == 0)
            {
                b[1][a[i][j]] = 1;
                b[2][a[i][j]] = i;
                b[3][a[i][j]] = j;
            }
        }
    }
    int s = tong;
    s = s / 2;
    while (b[1][s] == 0)
        s--;
    while (s > 0)
    {
        c[b[2][s]][b[3][s]] = 1;
        s -= a[b[2][s]][b[3][s]];
    }
    // In mảng c
    int s1 = 0, s2 = 0;
    cout << "Mảng c:" << endl;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cout << c[i][j] << " ";
            if (c[i][j] == 1)
            {
                s1 += a[i][j];
            }
            else
            {
                s2 += a[i][j];
            }
        }
        cout << endl;
    }

    int chenh_lech = abs(s1 - s2);
    cout << "Tổng chỉ số xe 1: " << s1 << endl;
    cout << "Tổng chỉ số xe 2: " << s2 << endl;
    cout << "Độ lệch giữa hai xe: " << chenh_lech << endl;
    return 0;
}