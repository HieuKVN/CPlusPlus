// Tóm tắt đề bài: Sinh tất cả các dãy nhị phân có độ dài n và chứa đúng k bit 1.

#include <bits/stdc++.h>
using namespace std;

int a[100]; // Mảng lưu cấu hình nhị phân hiện tại
int n, k;   // n là độ dài cấu hình, k là số lượng bit 1 cần có

// Hàm xuất cấu hình nhị phân hiện tại
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " "; // Xuất từng phần tử của mảng
    }
    cout << endl; // Xuống dòng sau khi xuất xong cấu hình
}

// Hàm sinh cấu hình nhị phân với độ dài n
void Try(int i)
{
    for (int j = 0; j <= 1; j++) // Thử gán giá trị 0 hoặc 1 cho vị trí thứ i
    {
        a[i] = j; // Gán giá trị j cho vị trí thứ i của mảng a[]

        if (i == n) // Nếu đã gán đủ n vị trí
        {
            int d = 0;                   // Biến đếm số lượng bit 1 trong cấu hình
            for (int l = 1; l <= n; l++) // Duyệt qua toàn bộ mảng a[]
            {
                if (a[l] == 1) // Nếu phần tử thứ l bằng 1
                {
                    d++; // Tăng biến đếm số lượng bit 1
                }
            }
            if (d == k) // Nếu số lượng bit 1 đúng bằng k
            {
                xuat(); // Xuất cấu hình thỏa mãn
            }
        }
        else // Nếu chưa gán đủ n vị trí
        {
            Try(i + 1); // Gọi đệ quy để gán tiếp vị trí tiếp theo
        }
    }
}

int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    cin >> n >> k;                   // Nhập độ dài n và số lượng bit 1 cần có k
    Try(1);                          // Bắt đầu sinh cấu hình từ vị trí đầu tiên
    return 0;
}
