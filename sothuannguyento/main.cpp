#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];

// Hàm đánh dấu các số nguyên tố từ 0 đến u bằng phương pháp Sieve of Eratosthenes
void sang(long long u)
{
    fill(f, f + u + 1, 1); // Khởi tạo mảng f với giá trị 1
    f[0] = f[1] = 0;       // 0 và 1 không phải là số nguyên tố

    for (long long i = 2; i * i <= u; ++i)
    {
        if (f[i])
        {
            for (long long j = i * i; j <= u; j += i)
            {
                f[j] = 0; // Đánh dấu các bội số của i không phải là số nguyên tố
            }
        }
    }
}

// Hàm kiểm tra xem tổng các chữ số của số u có phải là số nguyên tố không
bool tongso(long long u)
{
    int tong = 0;
    while (u > 0)
    {
        tong += u % 10;
        u /= 10;
    }
    return f[tong];
}

// Hàm kiểm tra xem tất cả các chữ số của số u có phải là 2, 3, 5, hoặc 7 không
bool kitu(long long u)
{
    while (u > 0)
    {
        int r = u % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return false;
        u /= 10;
    }
    return true;
}

int main()
{
    // Không cần freopen nếu không đọc/ghi từ file
    sang(nmax); // Khởi tạo mảng f để tìm số nguyên tố

    int b, c;
    cin >> b >> c;

    for (int i = b; i <= c; ++i)
    {
        if (f[i] && tongso(i) && kitu(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
