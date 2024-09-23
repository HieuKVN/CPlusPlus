#include <bits/stdc++.h>
#define nmax 1000000 // Định nghĩa giới hạn tối đa cho mảng sàng
using namespace std;

long long f[nmax]; // Mảng lưu trạng thái số nguyên tố, dùng bool để tiết kiệm bộ nhớ
long long a, b, n, i;

// Hàm sàng Eratosthenes để tìm các số nguyên tố từ 2 đến u
void sang(long long u)
{
	// Khởi tạo tất cả các giá trị trong mảng f là true (giả định tất cả là số nguyên tố)
	for (long long i = 2; i <= u; i++)
	{
		f[i] = true;
	}
	f[0] = f[1] = false; // 0 và 1 không phải là số nguyên tố

	// Thực hiện sàng Eratosthenes
	for (i = 2; i * i <= u; i++) // Chỉ cần sàng đến căn bậc hai của u
	{
		if (f[i]) // Nếu f[i] là số nguyên tố
		{
			for (long long j = i * i; j <= u; j += i) // Đánh dấu tất cả bội số của i là không phải số nguyên tố
				f[j] = false;
		}
	}
}

// Hàm đảo ngược số n
int pt(int n)
{
	int res = 0;
	while (n > 0)
	{
		int tmp = n % 10;	  // Lấy chữ số cuối cùng của n
		res = res * 10 + tmp; // Thêm chữ số vào số đảo ngược
		n = n / 10;			  // Loại bỏ chữ số cuối cùng khỏi n
	}
	return res; // Trả về số đã đảo ngược
}

int main()
{
	freopen("in.inp", "r", stdin);	 // Mở file đầu vào
	freopen("out.out", "w", stdout); // Mở file đầu ra

	sang(nmax); // Sàng nguyên tố đến giới hạn nmax

	cin >> a >> b; // Nhập khoảng a và b

	for (i = a; i <= b; i++) // Duyệt qua tất cả các số từ a đến b
	{
		// Kiểm tra nếu số i khi đảo ngược vẫn là số nguyên tố
		if (f[pt(i)])
			cout << i << " "; // In ra số thỏa mãn điều kiện
	}

	return 0;
}
