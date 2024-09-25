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
int main()
{
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào để đọc dữ liệu
	freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả
	sang(nmax);						 // Tính toán và đánh dấu các số nguyên tố đến nmax
	long long a;
	cin >> a;
	int dem = 0;	 // Khởi tạo biến đếm số lượng số nguyên tố
	long long i = 2; // Bắt đầu kiểm tra từ số 2
	while (dem < a)
	{
		if (f[i])
		{
			cout << i << " ";
			dem++;
		}
		i++;
	}
	return 0;
}
