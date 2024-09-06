// Tóm tắt đề bài: Tìm và đếm các số hạnh phúc trong một khoảng cho trước.

#include <bits/stdc++.h>
#define nmax 1000000 // Định nghĩa kích thước tối đa của mảng sàng
using namespace std;

long long f[nmax]; // Mảng lưu trạng thái số nguyên tố

// Hàm sàng Eratosthenes để tìm các số nguyên tố từ 2 đến u
void sang(long long u)
{
	// Khởi tạo tất cả các giá trị trong mảng f là 1 (giả định tất cả là số nguyên tố)
	for (long long i = 0; i <= u; i++)
	{
		f[i] = 1;
	}
	f[0] = f[1] = 0; // 0 và 1 không phải là số nguyên tố

	// Thực hiện sàng Eratosthenes
	for (long long i = 2; i * i <= u; i++) // Chỉ cần sàng đến căn bậc hai của u
	{
		if (f[i]) // Nếu f[i] là số nguyên tố
		{
			for (long long j = i * i; j <= u; j += i) // Đánh dấu tất cả bội số của i là không phải số nguyên tố
			{
				f[j] = 0;
			}
		}
	}
}

int main()
{
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào
	freopen("out.out", "w", stdout); // Mở file đầu ra
	sang(nmax);						 // Sàng nguyên tố đến giới hạn nmax

	long long n;
	cin >> n; // Nhập giá trị n từ đầu vào

	int dem = 0; // Biến đếm số lượng ước số nguyên tố
	// Duyệt qua tất cả các số từ n đến 2
	for (long long i = n; i >= 2; i--)
	{
		if (n % i == 0 && f[i]) // Nếu i là ước số của n và là số nguyên tố
		{
			cout << i << " "; // In ra ước số nguyên tố
			dem++;			  // Tăng biến đếm
		}
	}

	cout << endl
		 << dem; // In ra số lượng ước số nguyên tố tìm được
	return 0;
}
