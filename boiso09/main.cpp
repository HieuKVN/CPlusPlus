#include <bits/stdc++.h>
using namespace std;

string s;

// Hàm xử lý để tìm chuỗi nhị phân kế tiếp
void xuly()
{
    int i = s.size() - 1;

    // Tìm ký tự đầu tiên từ phải sang trái không phải là '1'
    while (i >= 0 && s[i] == '1')
    {
        i--;
    }

    // Nếu toàn bộ chuỗi là các ký tự '1'
    if (i < 0)
    {
        // In ra chuỗi toàn '0'
        cout << string(s.size(), '0') << endl;
    }
    else
    {
        // Thay đổi ký tự tìm được thành '1'
        s[i] = '1';

        // Đặt tất cả các ký tự sau vị trí i thành '0'
        fill(s.begin() + i + 1, s.end(), '0');

        // In ra chuỗi kết quả
        cout << s << endl;
    }
}

int main()
{
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> s;                        // Nhập chuỗi nhị phân
    xuly();                          // Gọi hàm xử lý

    return 0;
}
