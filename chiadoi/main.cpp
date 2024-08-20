#include <bits/stdc++.h>
using namespace std;

// Khai báo mảng để lưu trữ các giá trị của bài toán
int f[1000][1000];

// Hàm xử lý bài toán
void xuly(int n, int k)
{
    // Khởi tạo giá trị cơ bản của mảng f
    f[0][0] = 1;

    // Tính toán số cách phân phối n phần tử vào k nhóm
    for (int i = 1; i <= 25; ++i) // Chạy từ 1 đến 25 (số lượng phần tử)
    {
        for (int j = 1; j <= i; ++j) // Chạy từ 1 đến i (số nhóm)
        {
            // Công thức tính số cách phân phối
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j] * j;
        }
    }
    cout << f[n][k] << endl; // In kết quả số cách phân phối n phần tử vào k nhóm
}

int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả

    int t;
    cin >> t; // Đọc số lượng test cases

    while (t--) // Xử lý từng test case
    {
        int n, k;
        cin >> n >> k; // Đọc n và k cho từng test case
        xuly(n, k);    // Gọi hàm xử lý
    }

    return 0;
}
