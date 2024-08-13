#include <bits/stdc++.h>
using namespace std;

struct farm
{
    int gia;      // Giá mỗi đơn vị sản phẩm
    int so_luong; // Số lượng sản phẩm có sẵn
};

// Hàm so sánh để sắp xếp các farm theo giá tăng dần
bool cmp(farm a, farm b)
{
    return a.gia < b.gia;
}

int main()
{
    int n, m;

    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    // Đọc số lượng sản phẩm cần mua và số lượng farm
    cin >> n >> m;
    vector<farm> a(m);

    // Nhập dữ liệu cho mỗi farm
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i].gia >> a[i].so_luong;
    }

    // Sắp xếp các farm theo giá tăng dần
    sort(a.begin(), a.end(), cmp);

    int s = 0; // Tổng chi phí
    int d = 0; // Số lượng sản phẩm đã mua

    // Duyệt qua các farm và mua sản phẩm
    for (int i = 0; i < m; ++i)
    {
        // Nếu đã đủ số lượng cần mua thì dừng lại
        if (d >= n)
            break;

        // Tính số lượng sản phẩm cần mua từ farm hiện tại
        int need = min(a[i].so_luong, n - d);
        s += need * a[i].gia; // Cộng chi phí mua sản phẩm
        d += need;            // Cập nhật số lượng sản phẩm đã mua
    }

    // Xuất tổng chi phí
    cout << s << endl;
    return 0;
}
