#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];
long long a, b, n, i;

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

int pt(int n)
{
	int tmp;
	int res = 0;
	while (n > 0)
	{
		tmp = n % 10;
		res = res * 10 + tmp;
		n = n / 10;
	}
	return res;
}

int main()
{
	freopen("in.inp", "r", stdin);
	freopen("out.out", "w", stdout);
	sang(nmax);
	cin >> a >> b;
	for (i = a; i <= b; i++)
	{
		if (f[pt(i)])
			cout << i << " ";
	}

	return 0;
}
