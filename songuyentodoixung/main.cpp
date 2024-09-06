// Tóm tắt đề bài: Tìm số nguyên tố đối xứng nhỏ nhất lớn hơn số n cho trước.

#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax]; // Mảng lưu giá trị xác định số nguyên tố

void sang(long long u)
{
	long long j;
	for (long long i = 0; i <= u; i++)
	{
		f[i] = 1; // Giả sử tất cả các số đều là số nguyên tố
	}
	f[0] = f[1] = 0; // 0 và 1 không phải là số nguyên tố
	for (long long i = 2; i * i <= u; i++)
	{
		if (f[i])
		{
			for (j = i * i; j <= u; j += i)
				f[j] = 0; // Đánh dấu các bội số của i là không phải số nguyên tố
		}
	}
}

// Hàm đảo ngược số nguyên
int dn(int n)
{
	int kq = 0;
	while (n > 0)
	{
		kq = kq * 10 + n % 10;
		n = n / 10;
	}
	return kq;
}

// Hàm kiểm tra số đối xứng
bool dx(int n)
{
	return dn(n) == n;
}

// Hàm kiểm tra số nguyên tố và số đối xứng
bool sodep(int n)
{
	return f[n] && dx(n);
}

int main()
{
	int n;
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào để đọc dữ liệu
	freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
	sang(nmax);						 // Tính toán và đánh dấu các số nguyên tố đến nmax

	cin >> n;
	int m = n + 1;

	// Tìm số nguyên tố đối xứng lớn hơn n
	while (m <= nmax) // Đảm bảo không vượt quá giới hạn của mảng f
	{
		if (sodep(m))
		{
			cout << m;
			return 0;
		}
		m++;
	}

	// Nếu không tìm thấy số nguyên tố đối xứng trong khoảng [n, nmax]
	cout << "No";
	return 0;
}
