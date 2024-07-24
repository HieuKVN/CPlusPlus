#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];
long long s, i, n;

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

bool dx(int n)
{
	if (dn(n) == n)
		return true;
	else
		return false;
}

bool sodep(int n)
{
	if (f[n] && dx(n))
		return true;
	else
		return false;
}

int main()
{
	int m;
	freopen("in.inp", "r", stdin);
	freopen("out.out", "w", stdout);
	sang(nmax);
	cin >> n;
	m = n + 1;
	while (sodep(m) == false)
	{
		m = m + 1;
	}
	cout << m;
	return 0;
}
