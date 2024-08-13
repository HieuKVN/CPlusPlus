#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> n >> k;                   // Nhập số lượng phần tử và giá trị k

    int a[n]; // Khai báo mảng chứa các phần tử
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Nhập các phần tử vào mảng
    }

    // Duyệt mảng để tìm cặp số có tổng bằng k
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] + a[j] == k) // Kiểm tra nếu tổng của hai số bằng k
            {
                cout << a[j] << " " << a[i] << endl; // In ra cặp số
                break;                               // Dừng vòng lặp nội bộ nếu đã tìm thấy cặp số
            }
        }
    }

    return 0;
}
