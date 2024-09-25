#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
long long f[nmax]; // Mảng đánh dấu các số nguyên tố
// Hàm đánh dấu các số nguyên tố từ 0 đến u
void sang(long long u)
{
	long long j;
	for (long long i = 0; i <= u; i++)
	{
		f[i] = 1; // Giả sử tất cả các số đều là số nguyên tố
	}
	f[0] = f[1] = 0; // 0 và 1 không phải là số nguyên tố
	for (int i = 2; i * i <= u; i++)
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
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào để đọc dữ liệu
	freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
	sang(nmax);						 // Tính toán và đánh dấu các số nguyên tố đến nmax
	int n, k;
	cin >> n >> k; // Đọc hai số nguyên n và k từ file đầu vào
	// Kiểm tra các số từ 3 đến n để tìm các cặp số nguyên tố (i, i + k)
	for (int i = 3; i <= n; i++)
	{
		if (f[i] && f[i + k])					 // Nếu cả i và i + k đều là số nguyên tố
			cout << i << " " << (i + k) << endl; // In cặp số
	}
	return 0;
}
