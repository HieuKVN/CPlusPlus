#include <bits/stdc++.h>
using namespace std;
long long i, n; // Khai báo biến toàn cục để lưu chỉ số và số lượng phần tử
// Hàm tính số Fibonacci thứ n
int fibo(long long n)
{
    long long f1, f2, fn; // Các biến lưu giá trị của số Fibonacci
    if (n == 1 || n == 2) // Các số Fibonacci đầu tiên
        return 1;
    else
    {
        f1 = 1;       // Fibonacci(1)
        f2 = 1;       // Fibonacci(2)
        fn = f1 + f2; // Fibonacci(3)
        i = 3;        // Bắt đầu từ chỉ số 3
        while (i < n) // Tính các số Fibonacci tiếp theo cho đến khi đạt chỉ số n
        {
            f1 = f2;      // Cập nhật giá trị f1
            f2 = fn;      // Cập nhật giá trị f2
            fn = f1 + f2; // Tính số Fibonacci tiếp theo
            i = i + 1;    // Tăng chỉ số lên 1
        }
    }
    return fn; // Trả về số Fibonacci thứ n
}
int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
    cin >> n;                        // Đọc số n từ đầu vào
    for (i = 1; i <= n; i++)         // Lặp từ 1 đến n
    {
        cout << fibo(i) << " "; // Tính và in số Fibonacci thứ i
    }
    return 0;
}
