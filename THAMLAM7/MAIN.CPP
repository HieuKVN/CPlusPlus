#include <bits/stdc++.h>
using namespace std;
struct Job
{
    int id; // ID của công việc
    int dl; // Hạn chót để hoàn thành công việc
    int ln; // Lợi nhuận khi hoàn thành công việc
};
// Hàm so sánh để sắp xếp các công việc theo lợi nhuận giảm dần
bool cmp(Job x, Job y)
{
    return (x.ln > y.ln);
}
int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);
    int n; // Số lượng công việc
    cin >> n;
    Job a[n]; // Mảng lưu trữ các công việc
    // Nhập dữ liệu cho các công việc
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id >> a[i].dl >> a[i].ln;
    }
    // Sắp xếp các công việc theo lợi nhuận giảm dần
    sort(a, a + n, cmp);
    int s = 0;               // Tổng lợi nhuận
    int kq[n] = {0};         // Mảng lưu trữ chỉ số công việc được chọn
    bool check[n] = {false}; // Mảng kiểm tra ngày đã được chọn
    // Duyệt qua các công việc để chọn công việc có lợi nhuận cao nhất
    for (int i = 0; i < n; i++)
    {
        // Tìm ngày trống từ hạn chót trở về
        for (int j = min(n, a[i].dl); j >= 1; j--)
        {
            if (check[j] == false)
            {
                check[j] = true; // Đánh dấu ngày đã chọn
                kq[j] = i;       // Ghi chỉ số công việc vào mảng kq
                s += a[i].ln;    // Cộng lợi nhuận của công việc vào tổng lợi nhuận
                break;           // Thoát vòng lặp khi đã chọn được ngày
            }
        }
    }
    // In tổng lợi nhuận
    cout << s << endl;
    // In các ID của các công việc đã được chọn
    for (int i = 1; i <= n; i++)
    {
        if (check[i] == true)
        {
            cout << a[kq[i]].id << " ";
        }
    }
    return 0;
}
