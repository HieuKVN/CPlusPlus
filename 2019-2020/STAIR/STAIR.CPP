#include <bits/stdc++.h>
using namespace std;
/*
Tóm tắt đề bài:
Cho một số nguyên dương n. Tìm các bậc thang theo quy tắc sau:
1. Bậc thang là các số từ n đến 2 (theo thứ tự giảm dần).
2. Một số được chọn làm bậc thang nếu nó là ước của n hoặc là số nguyên tố.
3. In ra các bậc thang tìm được và số lượng bậc thang.
Input: Số nguyên dương n từ file STAIR.INP
Output:
- Dòng 1: Các bậc thang tìm được, cách nhau bởi dấu cách
- Dòng 2: Số lượng bậc thang
Giải thuật:
- Duyệt từ n đến 2
- Kiểm tra mỗi số có phải là ước của n hoặc số nguyên tố không
- Nếu thỏa mãn, in ra số đó và tăng biến đếm
- Cuối cùng in ra số lượng bậc thang
*/
// Hàm kiểm tra số nguyên tố
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    // Mở file đầu vào và đầu ra
    freopen("STAIR.INP", "r", stdin);
    freopen("STAIR.OUT", "w", stdout);
    int n;
    cin >> n;  // Đọc số n từ file đầu vào
    int d = 0; // Biến đếm số lượng bậc thang
    // Duyệt từ n đến 2 để tìm các bậc thang
    for (long long i = n; i >= 2; i--)
    {
        // Nếu i là ước của n hoặc i là số nguyên tố
        if (n % i == 0 || snt(i))
        {
            cout << i << " "; // In ra bậc thang
            d++;              // Tăng số lượng bậc thang
        }
    }
    // In ra số lượng bậc thang
    cout << endl
         << d;
    return 0;
}