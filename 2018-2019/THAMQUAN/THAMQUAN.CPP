
#include <bits/stdc++.h>
using namespace std;

/*
Tóm tắt đề bài:

Bài toán THAMQUAN yêu cầu phân công n học sinh đi tham quan m địa điểm, với:
- n <= m
- Mỗi học sinh có một điểm số riêng
- Mỗi địa điểm có một độ hấp dẫn riêng
- Mỗi học sinh được phân công đến một địa điểm
- Độ hài lòng của một cặp (học sinh, địa điểm) = điểm số học sinh * độ hấp dẫn địa điểm
- Mục tiêu là tối đa hóa tổng độ hài lòng của tất cả các cặp

Yêu cầu:
1. Tính tổng độ hài lòng lớn nhất có thể
2. In ra phương án phân công tối ưu (địa điểm được chọn cho mỗi học sinh)

Input:
- Dòng 1: n và m
- Dòng 2: n số nguyên là điểm số của các học sinh
- Dòng 3: m số nguyên là độ hấp dẫn của các địa điểm

Output:
- Dòng 1: Tổng độ hài lòng lớn nhất
- n dòng tiếp theo: Số thứ tự địa điểm được chọn cho mỗi học sinh
*/

int main()
{
    int n, m;

    // Mở file đầu vào và đầu ra
    freopen("THAMQUAN.INP", "r", stdin);
    freopen("THAMQUAN.OUT", "w", stdout);

    // Đọc số lượng học sinh (n) và số lượng địa điểm tham quan (m)
    cin >> n >> m;

    // Đọc thông tin về học sinh: điểm số và số thứ tự
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].first;   // Điểm số của học sinh
        d[i].second = i + 1; // Số thứ tự của học sinh
    }

    // Đọc thông tin về địa điểm tham quan: độ hấp dẫn và số thứ tự
    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i].first;   // Độ hấp dẫn của địa điểm
        v[i].second = i + 1; // Số thứ tự của địa điểm
    }

    // Sắp xếp học sinh theo điểm số giảm dần
    sort(d.begin(), d.end(), greater<pair<int, int>>());

    // Sắp xếp địa điểm theo độ hấp dẫn tăng dần
    sort(v.begin(), v.end());

    int s = 0; // Tổng độ hài lòng

    vector<int> res(n); // Kết quả phân công

    // Phân công học sinh cho địa điểm và tính tổng độ hài lòng
    for (int i = 0; i < n; i++)
    {
        s += d[i].first * v[i].first;       // Cộng vào tổng độ hài lòng
        res[d[i].second - 1] = v[i].second; // Ghi nhận phân công
    }

    // In ra tổng độ hài lòng
    cout << s << endl;

    // In ra kết quả phân công
    for (int x : res)
    {
        cout << x << endl;
    }

    return 0;
}
