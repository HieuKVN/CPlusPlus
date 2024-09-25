#include <bits/stdc++.h>
using namespace std;
// Cấu trúc lưu trữ thông tin về các khoảng thời gian
struct hd
{
    int start;  // Thời gian bắt đầu
    int finish; // Thời gian kết thúc
    int id;     // ID của khoảng thời gian
};
// Hàm so sánh để sắp xếp theo thời gian kết thúc
bool cmp(hd a, hd b)
{
    return a.finish < b.finish;
}
int main()
{
    int n;
    // Mở file để đọc dữ liệu và ghi kết quả
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    // Nhập số lượng khoảng thời gian
    cin >> n;
    // Khai báo mảng lưu các khoảng thời gian
    hd a[n + 1]; // Dùng n+1 để dễ quản lý chỉ số bắt đầu từ 1
    // Nhập thông tin các khoảng thời gian
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].start >> a[i].finish; // Nhập thời gian bắt đầu và kết thúc
        a[i].id = i;                      // Gán ID cho khoảng thời gian
    }
    // Sắp xếp các khoảng thời gian theo thời gian kết thúc
    sort(a + 1, a + n + 1, cmp);
    int d = 1;              // Số lượng khoảng thời gian chọn được
    int j = 1;              // Chỉ số của khoảng thời gian hiện tại
    vector<int> res;        // Mảng lưu kết quả các ID
    res.push_back(a[1].id); // Thêm khoảng thời gian đầu tiên vào kết quả
    // Duyệt qua các khoảng thời gian còn lại
    for (int i = 2; i <= n; i++)
    {
        // Nếu thời gian bắt đầu của khoảng thời gian hiện tại lớn hơn thời gian kết thúc của khoảng thời gian trước đó
        if (a[j].finish < a[i].start)
        {
            d++;                    // Tăng số lượng khoảng thời gian chọn được
            res.push_back(a[i].id); // Thêm ID của khoảng thời gian hiện tại vào kết quả
            j = i;                  // Cập nhật chỉ số khoảng thời gian hiện tại
        }
    }
    // In số lượng khoảng thời gian chọn được
    cout << d << endl;
    // In các ID của các khoảng thời gian chọn được
    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}
