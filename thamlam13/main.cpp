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
    int h = 0; // Biến để lưu giá trị tối đa
    // Duyệt qua các phần tử của mảng
    for (int i = 0; i < n; ++i)
    {
        // Nếu phần tử hiện tại lớn hơn hoặc bằng h, tăng giá trị của h
        if (a[i] >= h)
        {
            h++;
        }
    }
    // In giá trị h (giá trị lớn nhất không bị thiếu trong mảng)
    cout << h << endl;
    return 0;
}
