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

bool snt(int n)
{
	if (n < 2)
		return false;
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int tongbinh(int n)
{
	int kq;
	int s = 0;
	while (n > 0)
	{
		kq = n % 10;
		s = s + kq * kq;
		n = n / 10;
	}
	return s;
}

bool sodep(int n)
{
	sang(nmax);
	if (f[tongbinh(n)])
		return true;
	else
		return false;
}

int main()
{
	int m;
	freopen("in.inp", "r", stdin);
	freopen("out.out", "w", stdout);
	cin >> n;
	m = n + 1;
	while (sodep(m) == false)
	{
		m = m + 1;
	}
	cout << m;
	return 0;
}
