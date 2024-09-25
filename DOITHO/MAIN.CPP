#include <bits/stdc++.h>
using namespace std;
// Hàm tính số Fibonacci thứ n
long long fibo(long long n)
{
    // Khởi tạo các giá trị Fibonacci cơ bản
    long long f1 = 1, f2 = 1, fn;
    // Nếu n là 1 hoặc 2, trả về 1
    if (n == 1 || n == 2)
        return 1;
    else
    {
        // Tính số Fibonacci từ 3 đến n
        for (long long i = 3; i <= n; ++i)
        {
            fn = f1 + f2; // Tính số Fibonacci hiện tại
            f1 = f2;      // Cập nhật f1
            f2 = fn;      // Cập nhật f2
        }
        return fn; // Trả về số Fibonacci thứ n
    }
}
int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file "in.inp"
    freopen("out.out", "w", stdout); // Ghi kết quả vào file "out.out"
    long long n;
    cin >> n; // Đọc giá trị n từ file đầu vào
    // Tính và in số Fibonacci cho các chỉ số từ 1 đến n
    for (long long i = 1; i <= n; ++i)
    {
        cout << i << " : " << fibo(i) << endl; // In số Fibonacci thứ i
    }
    // In tổng số con thỏ sau n tháng
    cout << "Tong so con tho sau " << n << " thang la: " << fibo(n) << endl;
    return 0;
}
