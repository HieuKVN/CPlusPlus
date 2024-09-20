#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax]; // Mảng lưu giá trị xác định số nguyên tố
long long a, b, i;

// Hàm kiểm tra số nguyên tố
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
	int n;							 // Số lượng phần tử trong mảng
	int k;							 // Một giá trị nhập vào từ file đầu vào (không được sử dụng trong mã)
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào để đọc dữ liệu
	freopen("out.out", "w", stdout); // Mở file đầu ra để ghi kết quả

	sang(nmax); // Tính toán và đánh dấu các số nguyên tố đến nmax

	cin >> n >> k; // Đọc số lượng phần tử n và giá trị k từ file đầu vào

	int a[n]; // Mảng lưu các số nguyên được nhập vào
	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; // Đọc từng số vào mảng
	}

	sort(a, a + n); // Sắp xếp mảng theo thứ tự tăng dần

	int s = 0; // Biến tổng các số nguyên tố

	for (int i = 0; i < n; i++)
	{
		if (snt(a[i])) // Kiểm tra xem số hiện tại có phải là số nguyên tố không
		{
			s += a[i];			 // Cộng số nguyên tố vào tổng
			cout << a[i] << " "; // In số nguyên tố
		}
	}
	cout << endl
		 << s; // Xuống dòng và in tổng của các số nguyên tố
	return 0;
}
