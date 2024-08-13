#include <bits/stdc++.h>
using namespace std;

int a[1000];       // Mảng lưu trữ hoán vị hiện tại
int f[1000] = {0}; // Mảng đánh dấu các số đã được sử dụng
int n, k;          // Số lượng phần tử và kích thước của hoán vị

// Hàm xuất hoán vị hiện tại
void xuat()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

// Hàm đệ quy để sinh các hoán vị con
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!f[j]) // Nếu số j chưa được sử dụng
        {
            a[i] = j;   // Gán số j vào vị trí i của hoán vị
            f[j] = 1;   // Đánh dấu số j là đã sử dụng
            if (i == k) // Nếu đã chọn đủ k phần tử
            {
                xuat(); // Xuất hoán vị hiện tại
            }
            else
                Try(i + 1); // Tiếp tục chọn số cho vị trí tiếp theo
            f[j] = 0;       // Khôi phục trạng thái để số j có thể được sử dụng lại
        }
    }
}

int main()
{
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> n >> k;                   // Nhập số lượng phần tử và kích thước hoán vị

    Try(1); // Bắt đầu sinh hoán vị từ vị trí 1

    return 0;
}
