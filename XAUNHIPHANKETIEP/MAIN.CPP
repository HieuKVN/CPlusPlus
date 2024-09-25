#include <bits/stdc++.h>
using namespace std;
string s;
// Hàm để xử lý chuỗi nhị phân và in ra chuỗi kế tiếp
void xuly()
{
    int i = s.size() - 1;
    // Tìm chỉ số của ký tự '0' cuối cùng trong chuỗi
    while (i >= 0 && s[i] == '1')
    {
        i--;
    }
    // Nếu không tìm thấy ký tự '0', tức là chuỗi toàn '1'
    if (i < 0)
    {
        // In ra chuỗi toàn '0' có cùng độ dài với chuỗi đầu vào
        cout << string(s.size(), '0') << endl;
    }
    else
    {
        // Thay ký tự '0' đầu tiên từ phải sang trái thành '1'
        s[i] = '1';
        // Thay tất cả các ký tự sau vị trí đó thành '0'
        for (int j = i + 1; j < s.size(); j++)
        {
            s[j] = '0';
        }
        cout << s << endl;
    }
}
int main()
{
    // Đọc dữ liệu từ file in.inp
    freopen("in.inp", "r", stdin);
    // Ghi kết quả ra file out.out
    freopen("out.out", "w", stdout);
    // Đọc chuỗi nhị phân từ đầu vào
    cin >> s;
    // Xử lý chuỗi và in kết quả
    xuly();
    return 0;
}
