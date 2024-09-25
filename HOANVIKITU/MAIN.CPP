#include <bits/stdc++.h>
using namespace std;
int a[1000];       // Mảng lưu chỉ số của ký tự trong chuỗi k
int f[1000] = {0}; // Mảng đánh dấu đã sử dụng ký tự tại chỉ số tương ứng
string k;          // Chuỗi đầu vào
// Hàm in hoán vị hiện tại
void xuat()
{
    for (int i = 1; i <= k.size(); i++)
    {
        cout << k[a[i]]; // In ký tự tại vị trí a[i] trong chuỗi k
    }
    cout << endl;
}
// Hàm sinh hoán vị
void Try(int i)
{
    for (int j = 0; j <= k.size() - 1; j++)
    {
        if (!f[j]) // Nếu ký tự j chưa được sử dụng
        {
            a[i] = j;          // Gán chỉ số j vào vị trí i
            f[j] = 1;          // Đánh dấu ký tự j là đã sử dụng
            if (i == k.size()) // Nếu đã sinh ra hoán vị đầy đủ
            {
                xuat(); // In hoán vị hiện tại
            }
            else
            {
                Try(i + 1); // Sinh hoán vị cho chỉ số tiếp theo
            }
            f[j] = 0; // Đánh dấu ký tự j là chưa sử dụng để tiếp tục tìm kiếm
        }
    }
}
int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    cin >> k;                        // Đọc chuỗi k từ đầu vào
    Try(1);                          // Bắt đầu sinh hoán vị từ chỉ số 1
    return 0;
}
