// Tóm tắt đề bài: Đếm số lượng số Fibonacci là số nguyên tố trong khoảng từ 1 đến n.
#include <bits/stdc++.h>
#define nmax 10000
using namespace std;

long long f[nmax]; // Mảng đánh dấu số nguyên tố

// Hàm sàng Eratosthenes để tính số nguyên tố
void sang(long long u)
{
	fill(f, f + u + 1, true); // Khởi tạo tất cả các số đều là số nguyên tố
	f[0] = f[1] = false;	  // 0 và 1 không phải là số nguyên tố

	for (long long i = 2; i * i <= u; i++)
	{
		if (f[i]) // Nếu i là số nguyên tố
		{
			for (long long j = i * i; j <= u; j += i)
				f[j] = false; // Đánh dấu các bội số của i là không phải số nguyên tố
		}
	}
}

// Hàm kiểm tra số Fibonacci
bool ktrfibo(int n)
{
	if (n <= 0)
		return false; // Các số âm không phải số Fibonacci
	if (n == 1)
		return true; // 1 là số Fibonacci (xuất hiện hai lần trong dãy Fibonacci)

	long long fa = 1, fb = 1, f = fa + fb;
	while (f < n) // Tạo dãy Fibonacci cho đến khi lớn hơn hoặc bằng n
	{
		fa = fb;
		fb = f;
		f = fa + fb;
	}
	return (f == n); // Kiểm tra xem n có phải là số Fibonacci không
}

// Hàm đếm số nguyên tố Fibonacci trong khoảng từ 1 đến n
int ktr(int n)
{
	int dem = 0;
	sang(nmax); // Tính số nguyên tố

	for (int i = 1; i <= n; i++)
	{
		if (ktrfibo(i) && f[i])
			dem++; // Tăng biến đếm nếu i là số Fibonacci và là số nguyên tố
	}

	return dem; // Trả về số lượng số nguyên tố Fibonacci
}

int main()
{
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào
	freopen("out.out", "w", stdout); // Mở file đầu ra
	int n;
	cin >> n;
	cout << ktr(n); // In số lượng số nguyên tố Fibonacci trong khoảng từ 1 đến n
	return 0;
}
