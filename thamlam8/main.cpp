#include <bits/stdc++.h>
using namespace std;

// Cấu trúc để lưu thông tin của mỗi công việc
struct sx
{
    int id; // ID của công việc
    int dl; // Deadline hoặc thời gian kết thúc công việc
};

// Hàm so sánh để sắp xếp công việc theo deadline giảm dần
bool cmp(sx x, sx y)
{
    return x.dl > y.dl;
}

int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n; // Số lượng công việc
    cin >> n;

    sx a[n]; // Mảng lưu trữ thông tin các công việc

    // Nhập dữ liệu cho các công việc
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].dl;  // Nhập deadline cho công việc i
        a[i].id = i + 1; // Gán ID cho công việc i (bắt đầu từ 1)
    }

    // Sắp xếp các công việc theo deadline giảm dần
    sort(a, a + n, cmp);

    // In ra các deadline sau khi sắp xếp
    for (int i = 0; i < n; i++)
    {
        cout << a[i].dl << " ";
    }
    cout << endl;

    // In ra các ID của các công việc sau khi sắp xếp
    for (int i = 0; i < n; i++)
    {
        cout << a[i].id << " ";
    }
    cout << endl;

    // Phần mã bị comment có thể là một cách khác để in ra ID công việc
    // vector<int> res(n);
    // for (int i = 0; i < n; i++)
    // {
    //     res[i] = a[i].id;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << res[i] << " ";
    // }
    // cout << endl;

    return 0;
}
