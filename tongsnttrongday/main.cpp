#include <bits/stdc++.h>
#define nmax 1000000 // Giới hạn tối đa cho các số cần kiểm tra
using namespace std;

long long f[nmax + 1]; // Mảng đánh dấu số nguyên tố

// Hàm Sàng Eratosthenes để đánh dấu số nguyên tố
void sang(long long u)
{
    fill(f, f + u + 1, 1); // Khởi tạo mảng f với giá trị 1
    f[0] = f[1] = 0;       // 0 và 1 không phải là số nguyên tố

    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (long long j = i * i; j <= u; j += i)
                f[j] = 0; // Đánh dấu các bội số của i không phải là số nguyên tố
        }
    }
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> n;
    vector<int> a(n); // Sử dụng vector thay vì mảng cố định
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sang(nmax); // Khởi tạo mảng f với các số nguyên tố

    long long s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= nmax && f[a[i]]) // Kiểm tra số nguyên tố và đảm bảo không vượt quá nmax
            s += a[i];
    }

    cout << s << endl; // In tổng các số nguyên tố
    return 0;
}
