#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
const long long nmax = 1E6;
vector<bool> f(nmax + 1, true); // Make sure to allocate space for nmax

void sang(long long u)
{
    f[0] = f[1] = false;
    for (long long i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (long long j = i * i; j <= u; j += i)
            {
                f[j] = false;
            }
        }
    }
}

bool check(int n)
{
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n; // Check if the square of the integer sqrtN is equal to n
}

int main()
{
    freopen("CPDACBIET.INP", "r", stdin);
    freopen("CPDACBIET.OUT", "w", stdout);

    sang(nmax);

    int a, b;
    cin >> a >> b;

    int d = 0;

    for (int i = a; i <= b; i++)
    {
        if (check(i))
        {
            d++;
        }
    }

    cout << d << endl;

    return 0;
}
