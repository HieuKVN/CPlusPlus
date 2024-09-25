#include <bits/stdc++.h>
using namespace std;
// Hàm kiểm tra số chia hết hoàn toàn
bool check(int n)
{
    while (n > 0)
    {
        int k = n % 10;           // Lấy chữ số cuối cùng của số n
        if (k == 0 || n % k != 0) // Nếu chữ số là 0 hoặc số n không chia hết cho chữ số k
            return false;         // Trả về false vì n không phải là số chia hết hoàn toàn
        n /= 10;                  // Loại bỏ chữ số cuối cùng để kiểm tra chữ số tiếp theo
    }
    return true; // Nếu tất cả chữ số đều là ước của số n, trả về true
}
int main()
{
    freopen("SOCHIAHET.INP", "r", stdin);  // Mở file đầu vào
    freopen("SOCHIAHET.OUT", "w", stdout); // Mở file đầu ra
    int n;
    cin >> n;        // Đọc số lượng các số
    vector<int> res; // Vector lưu các số chia hết hoàn toàn
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;     // Đọc từng số
        if (check(k)) // Kiểm tra số có phải là số chia hết hoàn toàn không
        {
            res.push_back(k); // Nếu có, thêm vào vector kết quả
        }
    }
    cout << res.size() << endl; // In số lượng số chia hết hoàn toàn
    for (int x : res)           // In các số chia hết hoàn toàn
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
