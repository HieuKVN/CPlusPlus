#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Mở file để đọc dữ liệu và ghi kết quả
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    int n, k; // Khai báo số lượng phần tử và giá trị k
    cin >> n >> k;
    vector<int> a(n); // Mảng lưu trữ các giá trị
    // Nhập các giá trị vào mảng a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Sắp xếp mảng a theo thứ tự giảm dần
    sort(a.begin(), a.end(), greater<int>());
    int d = 0; // Số lượng phần tử đã chọn
    int s = k; // Giá trị còn lại cần giảm xuống 0
    // Lặp cho đến khi giá trị s giảm xuống 0
    while (s > 0)
    {
        // Duyệt qua các giá trị trong mảng a
        for (int i = 0; i < n; i++)
        {
            // Nếu giá trị a[i] có thể trừ được từ s
            if (s >= a[i])
            {
                d++;       // Tăng số lượng phần tử đã chọn
                s -= a[i]; // Giảm giá trị s đi a[i]
                break;     // Thoát khỏi vòng lặp và tiếp tục với giá trị s mới
            }
        }
    }
    // In số lượng phần tử đã chọn
    cout << d;
    return 0;
}
