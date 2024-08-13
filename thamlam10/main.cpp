#include <bits/stdc++.h>
using namespace std;

// Cấu trúc để lưu thông tin về mỗi con rồng
struct rong
{
    int sucmanh; // Sức mạnh của con rồng
    int chiso;   // Chỉ số gia tăng sau khi tiêu diệt con rồng
};

// Hàm so sánh để sắp xếp các con rồng theo sức mạnh tăng dần
bool cmp(rong a, rong b)
{
    return a.sucmanh < b.sucmanh;
}

int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n, s; // Số lượng con rồng và sức mạnh ban đầu
    cin >> n >> s;

    vector<rong> a(n); // Mảng lưu thông tin các con rồng

    // Nhập thông tin cho các con rồng
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].sucmanh >> a[i].chiso;
    }

    // Sắp xếp các con rồng theo sức mạnh tăng dần
    sort(a.begin(), a.end(), cmp);

    bool tieudiet = true; // Biến đánh dấu xem tất cả các con rồng có bị tiêu diệt hay không
    int chuaTieuDiet = 0; // Sức mạnh còn lại nếu không tiêu diệt được tất cả các con rồng
    int d = 0;            // Số lượng con rồng đã tiêu diệt

    // Xử lý từng con rồng theo thứ tự sức mạnh tăng dần
    for (int i = 0; i < n; ++i)
    {
        if (s > a[i].sucmanh)
        {
            s += a[i].chiso; // Gia tăng sức mạnh sau khi tiêu diệt con rồng
            d++;             // Tăng số lượng con rồng đã tiêu diệt
        }
        else
        {
            tieudiet = false;     // Không thể tiêu diệt con rồng hiện tại
            chuaTieuDiet = s - d; // Tính sức mạnh còn lại
            break;
        }
    }

    // Xuất kết quả
    if (tieudiet)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        cout << chuaTieuDiet << endl; // In sức mạnh còn lại nếu không tiêu diệt được tất cả các con rồng
    }

    return 0;
}
