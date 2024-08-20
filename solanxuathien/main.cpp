#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    freopen("in.inp", "r", stdin);   // Mở file đầu vào để đọc dữ liệu
    freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả

    cin >> n;

    vector<int> a(n); // Sử dụng vector thay vì mảng tĩnh

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // Sắp xếp mảng

    int dem = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            dem++;
        }
        else
        {
            cout << a[i - 1] << " : " << dem << endl;
            dem = 1;
        }
    }

    // In số lần xuất hiện của phần tử cuối cùng
    cout << a[n - 1] << " : " << dem << endl;

    return 0;
}
