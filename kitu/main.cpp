#include <bits/stdc++.h>

#define nmax 1000000
using namespace std;

long long f[nmax]; // Mảng lưu giá trị xác định số nguyên tố
long long a, b, i;

// Hàm đánh dấu các số nguyên tố trong khoảng từ 0 đến u
void sang(long long u)
{
    long long j;
    for (long long i = 0; i <= u; i++)
    {
        f[i] = 1; // Giả sử tất cả các số đều là số nguyên tố
    }
    f[0] = f[1] = 0; // 0 và 1 không phải là số nguyên tố
    for (i = 2; i * i <= u; i++)
    {
        if (f[i]) // Nếu i là số nguyên tố
        {
            for (j = i * i; j <= u; j += i)
                f[j] = 0; // Đánh dấu các bội số của i là không phải số nguyên tố
        }
    }
}

// Hàm kiểm tra xem có bất kỳ chữ số nào của u là số nguyên tố không
bool kitu(long long u)
{
    while (u > 0)
    {
        int r = u % 10; // Lấy chữ số cuối cùng của u
        if (f[r])       // Nếu chữ số này là số nguyên tố
            return true;
        u = u / 10; // Loại bỏ chữ số cuối cùng
    }
    return false; // Nếu không có chữ số nào là số nguyên tố
}

int main()
{
    sang(nmax);                      // Tính toán và đánh dấu các số nguyên tố đến nmax
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    int i;
    cin >> i;        // Đọc số cần kiểm tra từ file đầu vào
    cout << kitu(i); // Kiểm tra và in kết quả ra file đầu ra
    return 0;
}
