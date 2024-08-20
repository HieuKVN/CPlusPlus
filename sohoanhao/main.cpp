#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra số hoàn hảo
bool hoanhao(int n)
{
    if (n <= 1)
        return false; // Số nhỏ hơn hoặc bằng 1 không phải là số hoàn hảo

    int s = 1; // Bắt đầu với 1 vì 1 luôn là ước số của bất kỳ số nào
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            s += i;
            if (i != n / i)
            {
                s += n / i;
            }
        }
    }
    return s == n;
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả

    cin >> n;
    vector<int> a(n); // Sử dụng vector thay vì mảng tĩnh

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (hoanhao(a[i]))
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
