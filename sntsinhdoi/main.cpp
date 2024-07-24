#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;

long long f[nmax];
long long a, b, i;

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
	int n, k;
	cin >> n >> k;
	for (int i = 3; i <= n; i++)
	{
		if (f[i] && f[i + k])
			cout << i << " " << (i + k) << endl;
	}
	return 0;
}
