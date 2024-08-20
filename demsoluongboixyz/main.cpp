#include <bits/stdc++.h>
using namespace std;

// Hàm tính ước số chung lớn nhất (GCD) của a và b
int gcdeclip(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tính bội chung nhỏ nhất (LCM) của a và b
int lcm(int a, int b)
{
    int bcnn;
    bcnn = (a * b) / gcdeclip(a, b); // Sử dụng công thức: LCM(a, b) = (a * b) / GCD(a, b)
    return bcnn;
}

int main()
{
    int x, y, z;

    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra

    cin >> x >> y >> z; // Đọc các giá trị từ file đầu vào

    // Tính số lượng số nguyên từ 1 đến x chia hết cho cả y và z
    int dem = x / lcm(y, z);

    cout << dem; // In kết quả ra file đầu ra

    return 0;
}
