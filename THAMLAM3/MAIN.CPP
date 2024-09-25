#include <bits/stdc++.h>
using namespace std;
// Cấu trúc để lưu thông tin công việc
struct hd
{
    int start;  // Thời gian bắt đầu
    int finish; // Thời gian kết thúc
    int id;     // ID của công việc
};
// Hàm so sánh để sắp xếp công việc theo thời gian kết thúc
bool cmp(hd a, hd b)
{
    return a.finish < b.finish;
}
int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file in.inp
    freopen("out.out", "w", stdout); // Ghi kết quả ra file out.out
    cin >> n;                        // Nhập số lượng công việc
    hd a[n + 1];                     // Mảng chứa thông tin các công việc (số lượng công việc + 1 để phù hợp với chỉ số bắt đầu từ 1)
    // Nhập thời gian bắt đầu cho từng công việc
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].start;
        a[i].id = i; // Gán ID cho công việc
    }
    // Nhập thời gian kết thúc cho từng công việc
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].finish;
    }
    // Sắp xếp các công việc theo thời gian kết thúc
    sort(a + 1, a + n + 1, cmp);
    int d = 0;              // Biến lưu số lượng công việc được chọn
    int j = 1;              // Biến chỉ số công việc cuối cùng được chọn
    vector<int> res;        // Vector lưu các công việc được chọn
    res.push_back(a[1].id); // Chọn công việc đầu tiên
    d++;                    // Tăng số lượng công việc được chọn
    // Duyệt qua các công việc còn lại để chọn các công việc không bị chồng chéo
    for (int i = 2; i <= n; i++)
    {
        if (a[j].finish <= a[i].start) // Nếu công việc hiện tại bắt đầu sau khi công việc cuối cùng kết thúc
        {
            d++;                    // Tăng số lượng công việc được chọn
            res.push_back(a[i].id); // Thêm công việc vào danh sách được chọn
            j = i;                  // Cập nhật công việc cuối cùng được chọn
        }
    }
    // In số lượng công việc được chọn
    cout << d << endl;
    // In danh sách ID của các công việc được chọn
    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}
