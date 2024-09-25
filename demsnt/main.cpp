// Tóm tắt đề bài: Đếm số lượng số nguyên tố trong khoảng từ a đến b sử dụng phương pháp sàng Eratosthenes.
#include <bits/stdc++.h>
#define nmax 1000000
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
int main()
{
	// Mở file đầu vào từ stdin và file đầu ra tới stdout
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào (ví dụ: in.inp)
	freopen("out.out", "w", stdout); // Mở file đầu ra (ví dụ: out.out)
	long long a, b;
	cin >> a >> b;
	sang(nmax); // Tính các số nguyên tố từ 1 đến nmax
	long long dem = 0;
	for (long long i = a; i <= b; i++)
	{
		if (f[i]) // Kiểm tra nếu i là số nguyên tố
		{
			dem++; // Tăng số lượng số nguyên tố trong khoảng từ a đến b
		}
	}
	cout << dem; // In số lượng số nguyên tố
	return 0;
}
