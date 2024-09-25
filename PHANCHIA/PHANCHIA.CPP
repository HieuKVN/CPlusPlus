#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PHANCHIA.INP", "r", stdin);  // Mở file in.inp để đọc dữ liệu đầu vào
    freopen("PHANCHIA.OUT", "w", stdout); // Mở file out.out để ghi kết quả đầu ra
    int n;
    cin >> n;         // Nhập số lượng phần tử
    vector<int> a(n); // Khai báo vector chứa các phần tử
    int tong = 0;     // Tổng của tất cả các phần tử
    // Nhập các phần tử và tính tổng
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    // Một nửa tổng của các phần tử (chỉ số này sẽ được sử dụng để chia nhóm)
    int nua = tong / 2;
    // Khởi tạo mảng dp với giá trị -1, dùng để lưu trạng thái có thể đạt được tổng j
    vector<int> dp(nua + 1, -1);
    vector<int> d(n + 1, 0); // Mảng d để lưu các chỉ số phần tử thuộc nhóm đầu tiên
    dp[0] = 0;               // Tổng 0 có thể đạt được mà không cần bất kỳ phần tử nào
    // Cập nhật mảng dp dựa trên các phần tử hiện có
    for (int i = 1; i <= n; i++)
    {
        for (int j = nua; j >= a[i - 1]; j--)
        {
            // Nếu có thể đạt được tổng j - a[i - 1], cập nhật dp[j] với chỉ số phần tử i
            if (dp[j - a[i - 1]] != -1 && dp[j] == -1)
            {
                dp[j] = i; // Lưu chỉ số phần tử i
            }
        }
    }
    // Tìm tổng gần nhất với nua mà có thể đạt được
    int s = nua;
    while (s > 0 && dp[s] == -1)
    {
        s--;
    }
    // Xác định các phần tử thuộc nhóm đầu tiên
    while (s > 0)
    {
        d[dp[s]] = 1;      // Đánh dấu phần tử thuộc nhóm đầu tiên
        s -= a[dp[s] - 1]; // Giảm tổng s bằng giá trị phần tử được chọn
    }
    // Tính tổng của các phần tử trong hai nhóm
    long long s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 1)
        {
            s1 += a[i]; // Tổng của nhóm đầu tiên
        }
        else
        {
            s2 += a[i]; // Tổng của nhóm thứ hai
        }
    }
    // In hiệu số giữa hai nhóm
    cout << abs(s1 - s2) << endl;
    // In các phần tử của nhóm thứ hai
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    // In các phần tử của nhóm đầu tiên
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 1)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
