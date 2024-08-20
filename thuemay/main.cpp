#include <bits/stdc++.h>
using namespace std;

// Cấu trúc lưu thông tin về một công việc
struct cv
{
    int id;      // ID của công việc
    int batdau;  // Thời gian bắt đầu
    int ketthuc; // Thời gian kết thúc
    int tien;    // Số tiền thu được
};

// Hàm so sánh để sắp xếp công việc theo thời gian kết thúc
bool cmp(cv a, cv b)
{
    return a.ketthuc < b.ketthuc;
}

int main()
{
    int n;
    freopen("in.inp", "r", stdin);   // Mở file đầu vào
    freopen("out.out", "w", stdout); // Mở file đầu ra
    cin >> n;

    vector<cv> a(n); // Vector lưu các công việc

    // Nhập thông tin về các công việc
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].batdau >> a[i].ketthuc >> a[i].tien;
        a[i].id = i + 1; // Đánh số ID cho từng công việc
    }

    // Sắp xếp các công việc theo thời gian kết thúc
    sort(a.begin(), a.end(), cmp);

    vector<int> f(n, 0);    // Mảng lưu số tiền tối đa khi kết thúc công việc i
    vector<int> vet(n, -1); // Mảng lưu chỉ số công việc trước công việc i

    // Tính toán số tiền tối đa có thể thu được và theo dõi các công việc
    for (int i = 0; i < n; i++)
    {
        f[i] = a[i].tien; // Khởi tạo số tiền tối đa cho công việc i là số tiền của chính công việc i
        for (int j = 0; j < i; j++)
        {
            if (a[j].ketthuc < a[i].batdau && f[i] < f[j] + a[i].tien)
            {
                f[i] = f[j] + a[i].tien; // Cập nhật số tiền tối đa cho công việc i
                vet[i] = j;              // Ghi lại chỉ số công việc trước công việc i
            }
        }
    }

    // Tìm công việc có số tiền tối đa
    int maxx = 0, vt = 0;
    for (int i = 0; i < n; i++)
    {
        if (f[i] > maxx)
        {
            maxx = f[i];
            vt = i;
        }
    }

    vector<int> res; // Vector lưu các công việc tối ưu

    // Theo dõi chuỗi công việc tối ưu từ công việc có số tiền tối đa
    while (vt != -1)
    {
        res.push_back(a[vt].id); // Thêm ID của công việc vào kết quả
        vt = vet[vt];            // Chuyển đến công việc trước đó
    }

    cout << res.size() << " " << maxx << endl; // In số lượng công việc và tổng số tiền

    // Đảo ngược danh sách công việc để in theo thứ tự thời gian
    reverse(res.begin(), res.end());

    // In ra ID các công việc
    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}
