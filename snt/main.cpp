#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax]; // Mảng để đánh dấu số nguyên tố
long long n, i;

// Hàm đánh dấu các số nguyên tố trong khoảng từ 0 đến u
void sang(long long u)
{
	long long j;
	for (long long i = 0; i <= u; i++)
	{
		f[i] = 1; // Giả sử tất cả các số đều là số nguyên tố
	}
	f[0] = f[1] = 0; // 0 và 1 không phải là số nguyên tố
	for (i = 2; i * i <= u; i++)
	{
		if (f[i]) // Nếu i là số nguyên tố
		{
			for (j = i * i; j <= u; j += i)
				f[j] = 0; // Đánh dấu các bội số của i là không phải số nguyên tố
		}
	}
}

int main()
{
	freopen("in.inp", "r", stdin);	// Mở file đầu vào để đọc dữ liệu
	freopen("in.out", "w", stdout); // Mở file đầu ra để ghi kết quả

	sang(nmax); // Tính toán và đánh dấu các số nguyên tố đến nmax

	cin >> n; // Đọc số nguyên n từ file đầu vào

	for (i = 1; i <= n; i++) // Duyệt từ 1 đến n
	{
		if (f[i]) // Nếu i là số nguyên tố
		{
			cout << i << " "; // In số nguyên tố ra file đầu ra
		}
	}

	return 0;
}
