#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];
long long a, b, i;

bool snt(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}

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

int main()
{
	int n;
	int k;
	freopen("in.inp", "r", stdin);
	freopen("out.out", "w", stdout);

	sang(nmax);

	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	int s = 0;

	for (int i = 0; i < n; i++)
	{
		if (snt(a[i]))
		{
			s += a[i];
			cout << a[i] << " ";
		}
	}
	cout << endl
		 << s;
	return 0;
}
