#include <bits/stdc++.h>
using namespace std;
// Hàm kiểm tra và trả về số lớn nhất nếu là số chẵn
int ktrmax(int n)
{
    if (n % 2 == 0)
    {
        return n; // Trả về số nếu nó là số chẵn
    }
    return 0; // Trả về 0 nếu không phải số chẵn
}
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    cin >> n;                        // Đọc số lượng phần tử
    int a[n];                        // Khai báo mảng số nguyên với kích thước n
    for (int i = 0; i < n; i++)      // Bắt đầu từ chỉ số 0
    {
        cin >> a[i]; // Đọc từng phần tử vào mảng
    }
    int nmax = 0;               // Biến lưu số chẵn lớn nhất
    for (int i = 0; i < n; i++) // Bắt đầu từ chỉ số 0
    {
        nmax = max(nmax, ktrmax(a[i])); // Cập nhật số chẵn lớn nhất
    }
    cout << nmax; // In kết quả ra file đầu ra
    return 0;
}
