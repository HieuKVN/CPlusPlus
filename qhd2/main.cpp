#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    int n;
    cin >> n;                                 // Nhập số lượng bước
    vector<int> t(n + 1), r(n + 1), f(n + 1); // Khai báo các mảng
    // Nhập thời gian tốn để đi qua từng bước
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    // Nhập chi phí để di chuyển giữa các bước liên tiếp
    for (int i = 1; i <= n; i++)
    {
        cin >> r[i];
    }
    // Khởi tạo giá trị cho bước đầu tiên và bước thứ hai
    f[1] = t[1];                   // Chi phí tối ưu để đến bước 1 chỉ là thời gian đi qua bước 1
    f[2] = min(t[1] + t[2], r[1]); // Chi phí để đến bước 2 có thể là:
                                   // 1. Chi phí từ bước 1 cộng thời gian đi qua bước 2
                                   // 2. Chi phí di chuyển trực tiếp từ bước 1 đến bước 2
    // Tính toán chi phí tối ưu cho các bước từ 3 đến n
    for (int i = 3; i <= n; i++)
    {
        f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1]);
        // Chi phí tối ưu để đến bước i có thể là:
        // 1. Chi phí từ bước i-1 cộng thời gian đi qua bước i
        // 2. Chi phí từ bước i-2 cộng chi phí di chuyển giữa bước i-2 và bước i-1
    }
    cout << f[n]; // In chi phí tối ưu để đến bước cuối cùng
    return 0;
}
