// Tóm tắt đề bài: Tính ước chung lớn nhất (GCD) của hai số bằng phương pháp đệ quy và lặp, đồng thời tính bội chung nhỏ nhất (LCM).

#include <bits/stdc++.h>

using namespace std;

// Hàm tính GCD (Ước chung lớn nhất) bằng đệ quy
int gcddequy(int a, int b)
{
    if (b == 0)
        return a; // Khi b là 0, GCD là a
    else
        return gcddequy(b, a % b); // Đệ quy với a là b và b là a % b
}

// Hàm tính GCD bằng thuật toán Euclid lặp
int gcdeclip(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b; // Tính dư
        a = b;     // Cập nhật a thành b
        b = r;     // Cập nhật b thành dư
    }
    return a; // Trả về GCD
}

// Hàm tính LCM (Bội chung nhỏ nhất)
int lcm(int a, int b)
{
    // Sử dụng công thức: LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / gcddequy(a, b);
}

int main()
{
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    int n, k;
    cin >> n >> k;
    cout << "De Quy: " << gcddequy(n, k) << endl; // Tính GCD bằng đệ quy
    cout << "Eclip: " << gcdeclip(n, k) << endl;  // Tính GCD bằng lặp
    cout << "Boi Chung: " << lcm(n, k);           // Tính LCM
}
