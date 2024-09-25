// Tóm tắt đề bài: Sinh tất cả các chỉnh hợp lặp chập k của n phần tử, trong đó các phần tử được cho trước.
#include <bits/stdc++.h> // Thư viện chứa hầu hết các thư viện chuẩn của C++
using namespace std;
int a[1000]; // Mảng lưu tổ hợp hiện tại
int b[1000]; // Mảng lưu các giá trị đầu vào
int n, k;    // n là số phần tử trong mảng b[], k là độ dài tổ hợp cần sinh
int d = 0;   // Biến đếm số tổ hợp đã sinh
// Hàm xuất tổ hợp hiện tại ra màn hình
void xuat()
{
    for (int i = 1; i <= k; i++) // Duyệt qua tất cả các phần tử trong tổ hợp
        cout << a[i] << " ";     // In ra từng phần tử của tổ hợp
    cout << endl;                // Xuống dòng sau khi in hết một tổ hợp
}
// Hàm sinh tổ hợp bằng quay lui (Backtracking)
void Try(int i)
{
    for (int j = 1; j <= n; j++) // Duyệt qua tất cả các phần tử trong mảng b[]
    {
        a[i] = b[j]; // Gán phần tử thứ j của b[] vào vị trí thứ i của tổ hợp a[]
        if (i == k)  // Nếu đã gán đủ k phần tử
        {
            xuat(); // Xuất tổ hợp ra màn hình
            d++;    // Tăng biến đếm số tổ hợp
        }
        else // Nếu chưa đủ k phần tử
        {
            Try(i + 1); // Gọi đệ quy để tiếp tục gán phần tử tiếp theo
        }
    }
}
int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    cin >> n >> k;                   // Nhập số phần tử n và độ dài tổ hợp k
    for (int i = 1; i <= n; i++)     // Duyệt qua các phần tử của mảng b[]
    {
        cin >> b[i]; // Nhập từng phần tử của mảng b[]
    }
    Try(1);    // Bắt đầu sinh tổ hợp từ vị trí đầu tiên
    cout << d; // In ra tổng số tổ hợp đã sinh
    return 0;
}
