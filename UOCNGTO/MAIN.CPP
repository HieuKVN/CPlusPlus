#include <bits/stdc++.h>
#define nmax 1000000 // Giới hạn tối đa cho sàng Eratosthenes
using namespace std;
long long f[nmax]; // Mảng đánh dấu các số nguyên tố
// Hàm Sàng Eratosthenes để đánh dấu các số nguyên tố
void sang(long long u)
{
    long long j;
    fill(f, f + u + 1, 1); // Khởi tạo mảng f với giá trị 1
    f[0] = f[1] = 0;       // 0 và 1 không phải là số nguyên tố
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (j = i * i; j <= u; j += i)
                f[j] = 0; // Đánh dấu các bội số của i không phải là số nguyên tố
        }
    }
}
// Hàm tìm số nguyên tố lớn nhất là thừa số nguyên tố của n
int pt(int n)
{
    int res = -1e9; // Khởi tạo biến lưu giá trị lớn nhất
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            res = max(res, i); // Cập nhật giá trị lớn nhất
            n /= i;
        }
    }
    if (n > 1) // Nếu n còn lớn hơn 1, thì n là số nguyên tố lớn nhất
        res = max(res, n);
    return res;
}
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    sang(nmax);                      // Khởi tạo mảng f để tìm số nguyên tố
    cin >> n;                        // Nhập số n
    // Tìm số nguyên tố lớn nhất là thừa số nguyên tố của n và kiểm tra nó có phải là số nguyên tố không
    if (f[pt(n)])
        cout << pt(n); // In kết quả
}
