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

int main()
{
	freopen("in.inp", "r", stdin);
	freopen("out.out", "w", stdout);
	sang(nmax);
	cin >> n;
	int dem = 0;
	for (i = n; i >= 2; i--)
	{
		if ((n % i == 0) || f[i])
		{
			cout << i << " ";
			dem++;
		}
	}
	cout << endl
		 << dem;
	return 0;
}
