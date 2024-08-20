#include <bits/stdc++.h>
using namespace std;

int a[1000]; // Mảng lưu trữ các số nguyên
int n;       // Số lượng phần tử trong mảng

// Hàm xử lý để tìm hoán vị kế tiếp
void xuly()
{
    int i = n - 1;

    // Tìm chỉ số đầu tiên từ cuối mảng mà phần tử ở đó nhỏ hơn phần tử sau
    while (i > 0 && a[i] >= a[i + 1])
    {
        i--;
    }

    // Nếu không tìm thấy chỉ số i (mảng đã là hoán vị lớn nhất), in ra hoán vị đầu tiên
    if (i <= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        // Tìm chỉ số j để hoán đổi với chỉ số i
        int j = n;
        while (a[j] <= a[i])
        {
            j--;
        }

        // Hoán đổi giá trị tại chỉ số i và j
        swap(a[i], a[j]);

        // Đảo ngược mảng con từ i+1 đến n
        int l = i + 1;
        int r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }

        // In ra hoán vị mới
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Mở file đầu vào và đầu ra
    freopen("in.inp", "r", stdin);   // Đọc dữ liệu từ file "in.inp"
    freopen("out.out", "w", stdout); // Ghi kết quả vào file "out.out"

    cin >> n; // Đọc số lượng phần tử

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i]; // Đọc các phần tử vào mảng a
    }

    xuly(); // Gọi hàm xử lý
    return 0;
}
