#include <bits/stdc++.h>
using namespace std;
#define Nmax 1000009
/*
Tóm tắt đề bài CHUPANH:
Có n người xếp hàng chụp ảnh, mỗi người có một số thứ tự từ 1 đến n.
Yêu cầu:
1. Liệt kê tất cả các cách xếp hàng có thể (tất cả các hoán vị của n số từ 1 đến n).
2. Đếm số lượng cách xếp hàng.
Input:
- Một số nguyên duy nhất n (1 ≤ n ≤ 10)
Output:
- Các dòng đầu: Liệt kê tất cả các hoán vị, mỗi hoán vị trên một dòng
- Dòng cuối: Số lượng hoán vị
*/
int a[Nmax];       // Mảng lưu trữ hoán vị hiện tại
int f[Nmax] = {0}; // Mảng đánh dấu số đã được sử dụng
int n;             // Số lượng phần tử
int d = 0;         // Đếm số lượng hoán vị
// Hàm in ra hoán vị hiện tại
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
// Hàm quay lui để tạo hoán vị
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (f[j] == 0) // Nếu số j chưa được sử dụng
        {
            a[i] = j;   // Đặt số j vào vị trí thứ i
            f[j] = 1;   // Đánh dấu số j đã được sử dụng
            if (i == n) // Nếu đã đặt đủ n số
            {
                xuat(); // In ra hoán vị
                d++;    // Tăng số lượng hoán vị
            }
            else
            {
                Try(i + 1); // Đệ quy để đặt số tiếp theo
            }
            f[j] = 0; // Bỏ đánh dấu số j để thử các trường hợp khác
        }
    }
}
int main()
{
    freopen("CHUPANH.INP", "r", stdin);
    freopen("CHUPANH.OUT", "w", stdout);
    cin >> n; // Đọc số lượng phần tử
    Try(1);   // Bắt đầu quay lui từ vị trí đầu tiên
    cout << endl
         << d; // In ra tổng số hoán vị
    return 0;
}
