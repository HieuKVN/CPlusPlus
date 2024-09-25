#include <bits/stdc++.h>
using namespace std;
int a[100]; // Mảng lưu trữ các giá trị 0 hoặc 1
int n;      // Số lượng phần tử cần tạo
int d = 0;  // Biến đếm số lượng chuỗi nhị phân tạo được
// Hàm xuất chuỗi nhị phân hiện tại
void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " "; // In các phần tử của chuỗi
    cout << endl;            // Xuống dòng sau khi in chuỗi
}
// Hàm đệ quy để tạo tất cả các chuỗi nhị phân có độ dài n
void Try(int i)
{
    for (int j = 0; j <= 1; j++) // Chọn giá trị 0 hoặc 1 cho a[i]
    {
        a[i] = j;
        if (i == n) // Nếu đã tạo chuỗi đủ dài
        {
            xuat(); // Xuất chuỗi
            d++;    // Tăng số lượng chuỗi tạo được
        }
        else
        {
            Try(i + 1); // Đệ quy để tạo phần tử tiếp theo
        }
    }
}
int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    cin >> n;                        // Đọc số lượng phần tử từ file đầu vào
    Try(1);                          // Bắt đầu tạo chuỗi từ chỉ số 1
    cout << d;                       // In số lượng chuỗi nhị phân tạo được
    return 0;
}
