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

    int t = tong / 2;         // Một nửa tổng trọng lượng
    vector<int> dp(t + 1, 0); // Mảng dp để lưu trạng thái khả thi
    vector<int> d(n + 1, 0);  // Mảng đánh dấu viên kẹo thuộc nhóm nào

    dp[0] = 1; // Khởi tạo trạng thái ban đầu

    // Thuật toán quy hoạch động để tìm tập hợp viên kẹo có tổng trọng lượng gần một nửa nhất
    for (int i = 0; i < n; i++)
    {
        for (int j = t; j >= a[i]; j--)
        {
            if (dp[j - a[i]] > 0)
            {
                dp[j] = 1; // Đánh dấu trạng thái khả thi
            }
        }
    }

    // Tìm tổng trọng lượng lớn nhất có thể đạt được mà không vượt quá một nửa
    int s = t;
    while (s > 0 && dp[s] == 0)
    {
        s--;
    }

    // Truy vết để xác định các viên kẹo thuộc nhóm 1
    while (s > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s >= a[i] && dp[s - a[i]] > 0 && d[i] == 0)
            {
                d[i] = 1;  // Đánh dấu viên kẹo thuộc nhóm 1
                s -= a[i]; // Giảm trọng lượng còn lại
                break;
            }
        }
    }

    long long s1 = 0, s2 = 0; // Tổng trọng lượng của hai nhóm
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 1)
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
        if (d[i] == 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    // In ra trọng lượng các viên kẹo thuộc nhóm 1
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 1)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}