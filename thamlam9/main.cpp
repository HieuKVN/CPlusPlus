#include <bits/stdc++.h>
using namespace std;

// Cấu trúc để lưu thông tin của mỗi xe
struct Xe
{
    int phat; // Số tiền phạt
    int time; // Thời gian xử lý
    int id;   // ID của xe
};

// Hàm so sánh để sắp xếp xe theo tỷ lệ phạt trên thời gian giảm dần
bool cmp(Xe x, Xe y)
{
    // Tính tỷ lệ phạt trên thời gian cho từng xe
    long long tilex = x.phat / x.time;
    long long tiley = y.phat / y.time;
    return tilex > tiley; // So sánh tỷ lệ để sắp xếp
}

int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n; // Số lượng xe
    cin >> n;

    vector<Xe> a(n); // Mảng lưu thông tin các xe

    // Nhập thông tin phạt và ID cho các xe
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].phat; // Nhập số tiền phạt
        a[i].id = i + 1;  // Gán ID cho xe
    }

    // Nhập thông tin thời gian cho các xe
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].time; // Nhập thời gian xử lý
    }

    // Sắp xếp xe theo tỷ lệ phạt trên thời gian giảm dần
    sort(a.begin(), a.end(), cmp);

    long long tong_phat = 0; // Tổng số tiền phạt
    long long thoi_gian = 0; // Tổng thời gian xử lý

    vector<int> res(n); // Mảng lưu ID xe theo thứ tự sắp xếp

    // Tính tổng số tiền phạt và lưu ID xe theo thứ tự sắp xếp
    for (int i = 0; i < n; i++)
    {
        res[i] = a[i].id;                   // Lưu ID xe vào kết quả
        thoi_gian += a[i].time;             // Cập nhật tổng thời gian xử lý
        tong_phat += thoi_gian * a[i].phat; // Tính tổng tiền phạt
    }

    // In tổng số tiền phạt
    cout << tong_phat << endl;

    // In các ID xe theo thứ tự sắp xếp
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
