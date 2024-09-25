#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    // Mở file để đọc dữ liệu và ghi kết quả
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    // Nhập số lượng phần tử và giá trị tối đa
    cin >> n >> m;
    // Khai báo mảng chứa các phần tử
    int a[n];
    // Nhập các phần tử vào mảng
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Sắp xếp mảng theo thứ tự tăng dần
    sort(a, a + n);
    int s = 0; // Biến lưu số lượng phần tử được chọn
    int t = m; // Biến lưu tổng giá trị còn lại mà chúng ta có thể sử dụng
    // Duyệt qua mảng để chọn các phần tử sao cho tổng không vượt quá giá trị tối đa
    for (int i = 0; i < n; i++)
    {
        // Nếu phần tử hiện tại không vượt quá giá trị còn lại
        if (a[i] <= t)
        {
            s++;       // Tăng số lượng phần tử được chọn
            t -= a[i]; // Giảm giá trị còn lại bằng phần tử hiện tại
        }
        else
        {
            // Nếu phần tử vượt quá giá trị còn lại, dừng vòng lặp
            break;
        }
    }
    // In số lượng phần tử được chọn và giá trị còn lại
    cout << s << endl;
    cout << t;
    return 0;
}
