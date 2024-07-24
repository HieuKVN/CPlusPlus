#include <bits/stdc++.h>
#define nmax 10000
using namespace std;
long long f[nmax];
int a, b, n, i;
void sang(long long u)
{
	long long j;
	for (long long i = 0; i <= u; i++)
	{
		f[i] = 1;
	}
	f[0] = f[1] = 0;
	for (i = 2; i * i <= u; i++)
	{
		if (f[i])
		{
			for (j = i * i; j <= u; j += i)
				f[j] = 0;
		}
	}
}
bool ktrfibo(int n)
{
	long long i, f, fa, fb;
	if (n == 1 || n == 2)
		return 1;
	else
	{
		fa = 1;
		fb = 1;
		f = fa + fb;
		i = 3;
		while (f < n)
		{
			fa = fb;
			fb = f;
			f = fa + fb;
			i++;
		}
		if (f == n)
			return 1;
		else
			return 0;
	}
}
int ktr(int n)
{
	int dem;
	sang(nmax);
	for (i = 1; i <= n; i++)
	{
		if (ktrfibo(i) && f[i])
			dem++;
	}
	return dem;
}
int main()
{
	freopen("in.inp", "r", stdin);
	freopen("out.out", "w", stdout);
	cin >> n;
	int dem = 0;
	cout << ktr(n);
	return 0;
}
