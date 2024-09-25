#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> n;                        // Nhập số lượng bước
    vector<int> h(n + 1), f(n + 1);  // Khai báo mảng lưu trữ độ cao và mảng DP
    // Nhập độ cao của từng bước
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    // Khởi tạo giá trị cho bước đầu tiên và bước thứ hai
    f[1] = 0;                // Không có chi phí để đứng ở bước đầu tiên
    f[2] = abs(h[2] - h[1]); // Chi phí để nhảy từ bước 1 đến bước 2
    // Tính toán chi phí tối ưu cho từng bước từ 3 đến n
    for (int i = 3; i <= n; i++)
    {
        f[i] = min(f[i - 1] + abs(h[i] - h[i - 1]), f[i - 2] + abs(h[i] - h[i - 2]));
    }
    // In chi phí tối ưu để đến bước n
    cout << f[n];
    return 0;
}
