#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Nhập từng phần tử của mảng a
    }
    sort(a, a + n); // Sắp xếp mảng a theo thứ tự tăng dần
    int dem = 1;    // Biến đếm số lượng phần tử khác nhau, bắt đầu từ 1 vì ít nhất có 1 phần tử
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[i - 1]) // Nếu phần tử hiện tại khác với phần tử trước đó
        {
            dem++; // Tăng biến đếm
        }
    }
    cout << dem; // In ra số lượng phần tử khác nhau
    return 0;
}
