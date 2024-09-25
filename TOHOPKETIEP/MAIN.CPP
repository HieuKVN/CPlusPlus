#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a; // Sử dụng vector thay cho mảng cố định
void xuly()
{
    int i = k - 1; // Bắt đầu từ phần tử cuối cùng
    while (i >= 0 && a[i] == n - k + 1 + i)
    {
        i--;
    }
    if (i < 0)
    {
        // Nếu không còn tổ hợp tiếp theo, in tổ hợp đầu tiên
        for (int j = 0; j < k; j++)
            cout << j + 1 << " ";
        cout << endl;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j < k; j++)
            a[j] = a[j - 1] + 1;
        for (int j = 0; j < k; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}
int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    cin >> n >> k;
    a.resize(k); // Kích thước vector tùy theo k
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    xuly();
    return 0;
}
