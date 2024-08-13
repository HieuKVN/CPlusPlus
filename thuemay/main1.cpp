#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
const int INF = int(1e9);

struct don
{
    int l, r, v, id;
};

don a[N + 1];
int dp[N + 1], vet[N + 1];
vector<int> res;
int n;

// Hàm so sánh để sắp xếp các công việc theo thời gian kết thúc
bool cmp(don x, don y)
{
    return x.r < y.r;
}

int main()
{
    freopen("in.inp", "r", stdin);
    freopen("out1.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].l >> a[i].r >> a[i].v;
        a[i].id = i;
    }

    // Sắp xếp các công việc theo thời gian kết thúc
    sort(a + 1, a + n + 1, cmp);

    // Khởi tạo mảng dp
    fill(dp, dp + n + 1, 0);

    // Tính giá trị lớn nhất sử dụng lập trình động
    for (int i = 1; i <= n; i++)
    {
        // dp[i] = a[i].v;
        for (int j = 0; j < i; j++)
        {
            if (a[j].r <= a[i].l && dp[i] < dp[j] + a[i].v)
            {
                dp[i] = dp[j] + a[i].v;
                vet[i] = j;
            }
        }
    }

    // Tìm giá trị lớn nhất trong dp
    int maxgt = 0, maxss = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] > maxgt)
        {
            maxgt = dp[i];
            maxss = i;
        }
    }

    // Truy vết để tìm các công việc được chọn
    while (maxss != 0)
    {
        res.push_back(a[maxss].id);
        maxss = vet[maxss];
    }

    // Xuất kết quả
    cout << res.size() << " " << maxgt << endl;
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    return 0;
}