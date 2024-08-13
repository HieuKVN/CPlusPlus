#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    // Mở file để đọc dữ liệu và ghi kết quả
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    // Nhập số lượng phần tử trong hai dãy
    cin >> n >> m;

    // Khai báo và nhập dãy đầu tiên
    vector<pair<int, int>> a(n); // Mảng lưu cặp giá trị và chỉ số
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;   // Nhập giá trị
        a[i].second = i + 1; // Gán chỉ số
    }

    // Khai báo và nhập dãy thứ hai
    vector<pair<int, int>> b(m); // Mảng lưu cặp giá trị và chỉ số
    for (int i = 0; i < m; i++)
    {
        cin >> b[i].first;   // Nhập giá trị
        b[i].second = i + 1; // Gán chỉ số
    }

    // Sắp xếp dãy a theo giá trị giảm dần
    sort(a.begin(), a.end(), greater<pair<int, int>>());
    // Sắp xếp dãy b theo giá trị tăng dần
    sort(b.begin(), b.end());

    int s = 0; // Biến lưu tổng sản phẩm của các cặp

    // Mảng lưu chỉ số của dãy b tương ứng với chỉ số của dãy a
    vector<int> res(n);

    // Tính tổng sản phẩm và lưu chỉ số tương ứng
    for (int i = 0; i < n; i++)
    {
        s += a[i].first * b[i].first;       // Tính tổng sản phẩm
        res[a[i].second - 1] = b[i].second; // Lưu chỉ số của dãy b vào vị trí tương ứng trong dãy a
    }

    // In tổng sản phẩm
    cout << s << endl;

    // In chỉ số của dãy b tương ứng với dãy a
    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}
