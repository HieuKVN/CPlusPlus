#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];

void sang(long long u)
{
    long long j;
    for (long long i = 0; i <= u; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (j = i * i; j <= u; j += i)
                f[j] = 0;
        }
    }
}

// Hàm kiểm tra xem tất cả các chữ số của số u có phải là số nguyên tố không
bool kitu(long long u)
{
    // Chữ số nguyên tố trong khoảng từ 0 đến 9
    set<int> snt_digits = {2, 3, 5, 7};

    while (u > 0)
    {
        int digit = u % 10;
        if (snt_digits.find(digit) == snt_digits.end())
            return false;
        u /= 10;
    }
    return true;
}

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    sang(nmax);

    long long a;
    cin >> a;

    if (kitu(a))
        cout << a << " la so sieu nguyen to!";
    else
        cout << a << " kp la so sieu nguyen to!";

    return 0;
}
