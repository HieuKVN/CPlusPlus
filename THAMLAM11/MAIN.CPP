#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s; // Số lượng phần tử và giá trị ban đầu
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    // Đọc số lượng phần tử và giá trị ban đầu
    cin >> n >> s;
    vector<int> a(n); // Mảng lưu các giá trị
    // Nhập giá trị cho các phần tử trong mảng
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // Sắp xếp mảng theo thứ tự tăng dần
    sort(a.begin(), a.end());
    int count = 0; // Biến đếm số lượng phần tử có thể cộng vào giá trị ban đầu
    // Duyệt qua từng phần tử của mảng
    for (int i = 0; i < n; ++i)
    {
        if (s >= a[i])
        {
            s += a[i]; // Cộng giá trị phần tử vào giá trị hiện tại
            count++;   // Tăng số lượng phần tử đã cộng
        }
        else
        {
            break; // Nếu không đủ giá trị để cộng, dừng lại
        }
    }
    // Xuất số lượng phần tử có thể cộng vào giá trị ban đầu
    cout << count << endl;
    return 0;
}
