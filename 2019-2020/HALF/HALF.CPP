#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("HALF.INP", "r", stdin);
    freopen("HALF.OUT", "w", stdout);

    int N, M; // N: số lượng học sinh, M: số lượng xe
    cin >> N >> M;
    vector<vector<int>> a(N + 1, vector<int>(M + 1));
    vector<vector<int>> c(N + 1, vector<int>(M + 1, 0));
    // vector<vector<int>> a(N + 1, vector<int>(M + 1));    // Khởi tạo mảng a với kích thước N x M
    // vector<vector<int>> c(N + 1, vector<int>(M + 1, 0)); // Khởi tạo mảng c với giá trị ban đầu là 0

    int max_a = 0;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= M; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] > max_a)
            {
                max_a = a[i][j];
            }
        }
    }

    // Khởi tạo mảng B
    int max_size = 400 * max_a;
    // vector<vector<int>> B(4, vector<int>(max_size + 1, 0)); // Khởi tạo mảng B với giá trị ban đầu là 0
    vector<vector<int>> B(4, vector<int>(max_size + 1, 0));
    // int b[4][4000] = {0};
    int tong = 0;

    // Tính toán khả năng đạt được tổng các phần tử
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= M; ++j)
        {
            for (int k = tong; k >= 1; --k)
            {
                if (B[1][k] > 0 && B[1][k + a[i][j]] == 0)
                {
                    B[1][k + a[i][j]] = 1;
                    B[2][k + a[i][j]] = i;
                    B[3][k + a[i][j]] = j;
                }
            }
            tong += a[i][j];
            if (B[1][a[i][j]] == 0)
            {
                B[1][a[i][j]] = 1;
                B[2][a[i][j]] = i;
                B[3][a[i][j]] = j;
            }
        }
    }

    int u = tong;
    u = u / 2;
    while (B[1][u] == 0)
        u--;
    while (u > 0)
    {
        c[B[2][u]][B[3][u]] = 1;
        u -= a[B[2][u]][B[3][u]];
    }

    // In mảng c
    cout << "Mảng c (các phần tử thuộc xe 1):" << endl;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= M; ++j)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    // Tính tổng các chỉ số của hai xe và in độ lệch
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= M; ++j)
        {
            if (c[i][j] == 1)
            {
                sum1 += a[i][j];
            }
            else
            {
                sum2 += a[i][j];
            }
        }
    }

    int chenh_lech = abs(sum1 - sum2);
    cout << "Tổng chỉ số xe 1: " << sum1 << endl;
    cout << "Tổng chỉ số xe 2: " << sum2 << endl;
    cout << "Độ lệch giữa hai xe: " << chenh_lech << endl;

    return 0;
}