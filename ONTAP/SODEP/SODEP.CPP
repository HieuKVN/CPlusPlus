#include <bits/stdc++.h>
using namespace std;

bool ktr(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 6 && digit != 8)
            return false;
        num /= 10;
    }
    return true;
}

int main()
{
    int n;
    freopen("SODEP.INP", "r", stdin);
    freopen("SODEP.OUT", "w", stdout);

    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    int count = 0;

    for (int num : numbers)
    {
        if (ktr(num))
        {
            ++count;
        }
    }

    cout << count;

    return 0;
}
