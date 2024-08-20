#include <bits/stdc++.h>
using namespace std;

long long a, b, n, i;

// Hàm kiểm tra xem số n có phải là số Fibonacci không
bool fibo(long long n)
{
    long long f1, f2, fn;

    // Các số 1 và 2 đều là số Fibonacci
    if (n == 1 || n == 2)
        return true;
    else
    {
        // Khởi tạo các số Fibonacci đầu tiên
        f1 = 1;
        f2 = 1;
        fn = f1 + f2; // fn là số Fibonacci thứ 3
        i = 3;

        // Tính các số Fibonacci cho đến khi số hiện tại lớn hơn hoặc bằng n
        while (fn < n)
        {
            f1 = f2; // Cập nhật f1 và f2
            f2 = fn;
            fn = f1 + f2; // Cập nhật số Fibonacci tiếp theo
        }

        // Kiểm tra xem số n có phải là số Fibonacci không
        if (fn == n)
            return true;
        else
            return false;
    }
}

int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả

    cin >> n; // Đọc số cần kiểm tra

    // Kiểm tra và in kết quả
    if (fibo(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
