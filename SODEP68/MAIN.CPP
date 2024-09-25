#include <bits/stdc++.h>
using namespace std;
// Hàm kiểm tra xem số có chứa cả chữ số 6 và 8 hay không
bool ktr(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 6 && digit != 8)
            return false;
        num /= 10;
    }
    return true;
}
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    cin >> n;
    vector<int> a(n); // Sử dụng vector thay vì mảng tĩnh
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (ktr(a[i]))
        {
            dem++;
        }
    }
    cout << dem; // In kết quả ra file đầu ra
    return 0;
}
