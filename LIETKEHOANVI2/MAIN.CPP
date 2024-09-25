// Tóm tắt đề bài: Sinh hoán vị và thực hiện các thao tác: 1) Tìm vị trí của một hoán vị cụ thể, 2) In ra hoán vị thứ k.
#include <bits/stdc++.h>
using namespace std;
int a[1000];       // Mảng lưu trữ các hoán vị hiện tại
int f[1000] = {0}; // Mảng đánh dấu các số đã sử dụng trong hoán vị
int b[1000];       // Mảng lưu trữ một dãy số cần so sánh và số lượng hoán vị cần in
int n, k, x;       // Biến n: số lượng phần tử, k: chỉ số hoán vị cần in, x: giá trị đầu vào
int d1 = 0;        // Đếm số lượng hoán vị khớp với dãy b
int d2 = 0;        // Đếm số lượng hoán vị được sinh ra
// Hàm kiểm tra và xuất hoán vị khi nó bằng với dãy b
void xuly1()
{
    d1++;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return; // Nếu hoán vị không giống dãy b, thoát
    }
    cout << d1 << endl; // In ra số hoán vị đạt yêu cầu
    return;
}
// Hàm kiểm tra số lượng hoán vị
void xuly2()
{
    d2++;
    if (d2 == k)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " "; // In ra hoán vị thứ k
        }
        cout << endl;
        return;
    }
}
// Hàm in hoán vị hiện tại
void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
// Hàm sinh các hoán vị và kiểm tra với dãy b
void Try1(int i)
{
    for (int j = 1; j <= n; j++)
        if (f[j] == 0)
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
            {
                xuly1(); // Kiểm tra hoán vị hiện tại
            }
            else
                Try1(i + 1); // Tiếp tục sinh hoán vị cho vị trí tiếp theo
            f[j] = 0;        // Gỡ đánh dấu sau khi quay lui
        }
}
// Hàm sinh các hoán vị và in ra hoán vị thứ k
void Try2(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!f[j])
        {
            a[i] = j;
            f[j] = 1;
            if (i == n)
            {
                xuly2(); // Kiểm tra và in ra hoán vị thứ k
            }
            else
                Try2(i + 1); // Tiếp tục sinh hoán vị cho vị trí tiếp theo
            f[j] = 0;        // Gỡ đánh dấu sau khi quay lui
        }
    }
}
int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    // Đọc dữ liệu đầu vào
    while (cin >> x)
    {
        b[++n] = x; // Đọc dãy số b và số lượng hoán vị cần in
    }
    k = b[n]; // Lấy số lượng hoán vị cần in
    n--;      // Giảm số lượng phần tử để phù hợp với số lượng nhập vào
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i]; // Đọc dãy số a
    }
    Try1(1); // Sinh tất cả các hoán vị và kiểm tra với dãy b
    Try2(1); // Sinh tất cả các hoán vị và in ra hoán vị thứ k
    return 0;
}
