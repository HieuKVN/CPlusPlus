#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    // Đọc số lượng phần tử
    cin >> n;
    int a[n];

    // Nhập dữ liệu cho mảng
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Sắp xếp mảng theo thứ tự tăng dần
    sort(a, a + n);

    int s = 0; // Biến lưu tổng giá trị tính được

    // Duyệt qua các phần tử của mảng
    for (int i = 0; i < n; ++i)
    {
        // Tính tổng giá trị chênh lệch nếu chênh lệch dương
        if (a[i] - i > 0)
        {
            s += a[i] - i;
        }
    }

    // In tổng giá trị tính được
    cout << s << endl;
    return 0;
}
