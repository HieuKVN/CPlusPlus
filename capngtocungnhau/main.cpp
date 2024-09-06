// Tóm tắt đề bài: Tìm các cặp số nguyên tố cùng nhau trong một mảng số nguyên.

#include <bits/stdc++.h>
using namespace std;

// Hàm tính ước số chung lớn nhất (GCD) sử dụng đệ quy
int gcddequy(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcddequy(b, a % b);
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> n;                        // Nhập số lượng phần tử

    int a[n]; // Khai báo mảng chứa các phần tử
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Nhập các phần tử vào mảng
    }

    // Duyệt mảng để tìm các cặp số có GCD bằng 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] && a[j]) // Kiểm tra các phần tử khác 0
            {
                if (gcddequy(a[i], a[j]) == 1) // Kiểm tra nếu GCD của hai số bằng 1
                {
                    cout << "(" << a[j] << "," << a[i] << ")" << endl; // In ra cặp số
                }
            }
        }
    }

    return 0;
}
