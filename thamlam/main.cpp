#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> n;                        // Nhập số lượng phần tử (n) mà bạn sẽ đọc vào
    int a[2 * n + 1];                // Mảng chứa 2n phần tử (cộng thêm 1 để phù hợp với chỉ số bắt đầu từ 1)
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> a[i]; // Nhập các phần tử vào mảng
    }
    // Sắp xếp mảng theo thứ tự giảm dần
    sort(a + 1, a + 2 * n + 1, greater<int>());
    int s = 0; // Biến lưu tổng các sản phẩm
    // Duyệt mảng để tính tổng các sản phẩm của các cặp số
    for (int i = 1; i < 2 * n; i += 2)
    {
        s += a[i] * a[i + 1];                    // Cộng tích của hai số liên tiếp vào tổng
        cout << a[i] << " " << a[i + 1] << endl; // In ra cặp số
    }
    cout << s; // In ra tổng các sản phẩm
    return 0;
}
