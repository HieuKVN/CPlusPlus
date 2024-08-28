#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra xem một chuỗi có phải là palindrome hay không
bool check(string s, int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    // Mở file vào và ra sử dụng freopen
    freopen("PALIN.INP", "r", stdin);
    freopen("PALIN.OUT", "w", stdout);

    string s;
    cin >> s; // Đọc chuỗi từ file

    int n = s.size();
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    // Sử dụng lập trình động để tính toán số lượng palindrome ít nhất
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (check(s, j, i - 1))
            {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    // Ghi kết quả ra file
    cout << dp[n] << endl;

    return 0;
}
