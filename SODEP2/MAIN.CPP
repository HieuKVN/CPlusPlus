#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
long long f[nmax]; // Mảng đánh dấu các số nguyên tố
long long n, i;
// Hàm sử dụng thuật toán Sieve of Eratosthenes để đánh dấu các số nguyên tố từ 0 đến u
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
// Hàm kiểm tra xem một số có phải là số nguyên tố không
bool snt(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
// Hàm tính tổng bình phương các chữ số của số n
int tongbinh(int n)
{
	int kq;
	int s = 0;
	while (n > 0)
	{
		kq = n % 10;	 // Lấy chữ số cuối cùng của n
		s = s + kq * kq; // Cộng bình phương của chữ số vào tổng
		n = n / 10;		 // Loại bỏ chữ số cuối cùng
	}
	return s;
}
// Hàm kiểm tra xem tổng bình phương các chữ số của n có phải là số nguyên tố không
bool sodep(int n)
{
	// Đảm bảo mảng f đã được khởi tạo
	sang(nmax);
	return f[tongbinh(n)]; // Kiểm tra xem tổng bình phương có phải là số nguyên tố không
}
int main()
{
	int m;
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào để đọc dữ liệu
	freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
	cin >> n;
	m = n + 1;
	// Tìm số nguyên dương lớn nhất sao cho tổng bình phương các chữ số của nó là số nguyên tố
	while (!sodep(m))
	{
		m++;
	}
	cout << m; // In kết quả ra file đầu ra
	return 0;
}
