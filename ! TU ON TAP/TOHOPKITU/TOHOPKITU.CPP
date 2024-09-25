#include <bits/stdc++.h>
using namespace std;
#define nmax 1000
int n, k, f[nmax] = {0}, b[nmax];
// string a[nmax];
int a[nmax];
string s;
void Xuat()
{
    for (int i = 1; i <= s.size(); i++)
    {
        cout << s[a[i]];
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j < s.size(); j++)
    {
        if (!f[j])
        {
            a[i] = j;
            f[j] = 1;
            if (i == s.size())
            {
                Xuat();
            }
            else
                Try(i + 1);
            f[j] = 0;
        }
    }
}
int main()
{
    freopen("TOHOPKITU.INP", "r", stdin);
    freopen("TOHOPKITU.OUT", "w", stdout);
    cin >> s;
    Try(1);
    return 0;
}