// Tóm tắt đề bài: Sinh tất cả các tổ hợp nhị phân có độ dài n, thay đổi giá trị 0, 1 thành 'b', 'w' và đếm số lượng tổ hợp.
#include <bits/stdc++.h>
using namespace std;
int a[100]; // Mảng lưu các giá trị nhị phân
int n;      // Độ dài của tổ hợp
int d = 0;  // Biến đếm số lượng tổ hợp
// Hàm xuất tổ hợp và thay đổi giá trị 0, 1 thành 'b', 'w'
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        // Chuyển đổi giá trị 0 và 1 thành ký tự 'b' và 'w'
        if (a[i] == 1)
            cout << 'w' << " ";
        else
            cout << 'b' << " ";
    }
    cout << endl;
}
// Hàm đệ quy sinh các tổ hợp nhị phân
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j; // Gán giá trị 0 hoặc 1
        if (i == n)
        {
            xuat(); // In tổ hợp khi đã đạt độ dài n
            d++;    // Tăng số lượng tổ hợp
        }
        else
        {
            Try(i + 1); // Đệ quy để sinh các tổ hợp tiếp theo
        }
    }
}
int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    cin >> n;                        // Đọc độ dài tổ hợp
    Try(1);                          // Bắt đầu sinh tổ hợp từ chỉ số 1
    cout << d;                       // In tổng số tổ hợp đã sinh ra
    return 0;
}
