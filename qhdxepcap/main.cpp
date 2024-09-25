#include <bits/stdc++.h>
using namespace std;
int f[1000][1000];
void xuly(int n, int k)
{
    // Khởi tạo bảng DP
    f[0][0] = 1;
    // Tính giá trị của bảng DP theo công thức phân hoạch
    for (int i = 1; i <= 25; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j] * j;
        }
    }
    // In kết quả
    cout << f[n][k] << endl;
}
int main()
{
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    int t;
    cin >> t; // Nhập số lượng trường hợp test
    while (t--)
    {
        int n, k;
        cin >> n >> k; // Nhập các giá trị n và k cho từng trường hợp test
        xuly(n, k);    // Gọi hàm xử lý để tính toán và in kết quả
    }
    return 0;
}
