#include <bits/stdc++.h>
using namespace std;
/*
Tóm tắt đề bài TANGKEO:
Có n viên kẹo, mỗi viên có một trọng lượng riêng.
Yêu cầu chia n viên kẹo thành 2 nhóm sao cho:
1. Chênh lệch tổng trọng lượng giữa hai nhóm là nhỏ nhất.
2. In ra độ chênh lệch trọng lượng giữa hai nhóm.
3. In ra trọng lượng các viên kẹo thuộc nhóm 2.
4. In ra trọng lượng các viên kẹo thuộc nhóm 1.
Input:
- Dòng 1: Số nguyên n (số lượng viên kẹo)
- Dòng 2: n số nguyên là trọng lượng của các viên kẹo
Output:
- Dòng 1: Độ chênh lệch trọng lượng nhỏ nhất giữa hai nhóm
- Dòng 2: Trọng lượng các viên kẹo thuộc nhóm 2
- Dòng 3: Trọng lượng các viên kẹo thuộc nhóm 1
*/
int main()
{
    freopen("TANGKEO.INP", "r", stdin);
    freopen("TANGKEO.OUT", "w", stdout);
    int n;
    cin >> n;         // Đọc số lượng viên kẹo
    vector<int> a(n); // Mảng lưu trọng lượng các viên kẹo
    int tong = 0;     // Tổng trọng lượng tất cả viên kẹo
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];  // Đọc trọng lượng từng viên kẹo
        tong += a[i]; // Cộng vào tổng trọng lượng
    }
    int nua = tong / 2;          // Một nửa tổng trọng lượng
    vector<int> dp(nua + 1, -1); // Mảng dp để lưu trạng thái khả thi
    vector<int> d(n + 1, 0);     // Mảng đánh dấu viên kẹo thuộc nhóm nào
    dp[0] = 0;                   // Khởi tạo trạng thái ban đầu
    // Thuật toán quy hoạch động để tìm tập hợp viên kẹo có tổng trọng lượng gần một nửa nhất
    for (int i = 1; i <= n; i++)
    {
        for (int j = nua; j >= a[i - 1]; j--)
        {
            if (dp[j - a[i - 1]] != -1 && dp[j] == -1)
            {
                dp[j] = i;
            }
        }
    }
    // Tìm tổng trọng lượng lớn nhất có thể đạt được mà không vượt quá một nửa
    int s = nua;
    while (s > 0 && dp[s] == -1)
    {
        s--;
    }
    // Truy vết để xác định các viên kẹo thuộc nhóm 1
    while (s > 0)
    {
        d[dp[s]] = 1;
        s -= a[dp[s] - 1];
    }
    long long s1 = 0, s2 = 0; // Tổng trọng lượng của hai nhóm
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 1)
        {
            s1 += a[i]; // Cộng vào nhóm 1
        }
        else
        {
            s2 += a[i]; // Cộng vào nhóm 2
        }
    }
    cout << abs(s1 - s2) << endl; // In ra độ chênh lệch giữa hai nhóm
    // In ra trọng lượng các viên kẹo thuộc nhóm 2
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    // In ra trọng lượng các viên kẹo thuộc nhóm 1
    for (int i = 0; i < n; i++)
    {
        if (d[i + 1] == 1)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
