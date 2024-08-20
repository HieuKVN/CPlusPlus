#include <bits/stdc++.h>
using namespace std;

int a[1000];       // Mảng lưu trữ các hoán vị hiện tại
int f[1000] = {0}; // Mảng đánh dấu các số đã sử dụng trong hoán vị
int b[1000];       // Mảng lưu trữ một dãy số cần so sánh
int n, k;
int d = 0; // Đếm số lượng hoán vị

// Hàm kiểm tra và xuất hoán vị khi nó bằng với dãy b
void xuly1()
{
    d++;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            return; // Nếu hoán vị không giống dãy b, thoát
        }
    }
    cout << d << endl; // In ra số hoán vị đạt yêu cầu
    return;
}

// Hàm kiểm tra số lượng hoán vị
void xuly2()
{
    d++;
    if (d == k)
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

// Hàm sinh các hoán vị
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!f[j])
        {
            a[i] = j; // Gán giá trị cho vị trí i
            f[j] = 1; // Đánh dấu giá trị j đã được sử dụng
            if (i == n)
            {
                xuly2(); // Nếu đã tạo được hoán vị đầy đủ, kiểm tra và xuất kết quả
            }
            else
                Try(i + 1); // Tiếp tục sinh hoán vị cho vị trí tiếp theo
            f[j] = 0;       // Gỡ đánh dấu sau khi quay lui
        }
    }
}

int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả

    cin >> n; // Đọc số lượng phần tử

    for (int i = 1; i <= n; i++)
    {
        cin >> b[i]; // Đọc dãy số b
    }

    cin >> k; // Đọc số lượng hoán vị cần kiểm tra

    Try(1); // Bắt đầu sinh hoán vị từ vị trí 1

    return 0;
}
