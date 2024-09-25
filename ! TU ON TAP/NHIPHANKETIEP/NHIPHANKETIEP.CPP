#include <bits/stdc++.h>
using namespace std;
string s;
void xuly(string s)
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i >= 0)
    {
        s[i] = '1';
    }
    cout << s << endl;
}
int main()
{
    freopen("NHIPHANKETIEP.INP", "r", stdin);
    freopen("NHIPHANKETIEP.OUT", "w", stdout);
    cin >> s;
    xuly(s);
    return 0;
}
