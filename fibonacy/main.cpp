// Tóm tắt đề bài: Tính số Fibonacci thứ n sử dụng phương pháp lặp.
#include <bits/stdc++.h>
using namespace std;
long long i, n;
// Hàm tính số Fibonacci thứ n
int fibo(long long n)
{
    long long f1, f2, fn;
    // Nếu n là 1 hoặc 2, trả về 1 vì Fibonacci của 1 và 2 đều bằng 1
    if (n == 1 || n == 2)
        return 1;
    else
    {
        // Khởi tạo giá trị Fibonacci đầu tiên
        f1 = 1;
        f2 = 1;
        fn = f1 + f2; // Fibonacci thứ 3
        // Tính toán số Fibonacci từ 4 đến n
        i = 3;
        while (i < n)
        {
            f1 = f2;      // Cập nhật f1 thành giá trị cũ của f2
            f2 = fn;      // Cập nhật f2 thành giá trị mới của fn
            fn = f1 + f2; // Tính giá trị Fibonacci mới
            i = i + 1;    // Tăng chỉ số lên 1
        }
    }
    return fn; // Trả về số Fibonacci thứ n
}
int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file "in.inp"
    freopen("out.out", "w", stdout); // Ghi kết quả vào file "out.out"
    cin >> n;                        // Đọc giá trị n từ file đầu vào
    cout << fibo(n);                 // In số Fibonacci thứ n ra file đầu ra
    return 0;
}
