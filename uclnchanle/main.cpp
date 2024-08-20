#include <bits/stdc++.h>

using namespace std;

// Hàm tính GCD (Ước chung lớn nhất) bằng thuật toán Euclid
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b; // Tính dư
        a = b;         // Cập nhật a thành b
        b = r;         // Cập nhật b thành dư
    }
    return a; // Trả về GCD
}

int main()
{
    int a, b, t;
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    cin >> t; // Đọc số lượng bài toán
    while (t--)
    {
        cin >> a >> b; // Đọc hai số a và b
        // Tính GCD của a và b, kiểm tra tính chẵn lẻ
        if (gcd(a, b) % 2 == 0)
            cout << "even" << endl; // Nếu GCD chẵn
        else
            cout << "odd" << endl; // Nếu GCD lẻ
    }
    return 0;
}
