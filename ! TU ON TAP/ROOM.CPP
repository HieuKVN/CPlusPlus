#include <bits/stdc++.h>
using namespace std;

struct room
{
    int begin, end, id;
};

bool cmp(room a, room b)
{
    return a.end < b.end;
}

int main()
{
    freopen("ROOM.INP", "r", stdin);
    freopen("ROOM.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<room> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].begin >> a[i].end;
        a[i].id = i + 1;
    }

    sort(a.begin(), a.end(), cmp);

    int d = 1;
    int j = 0;
    vector<int> res;
    res.push_back(a[0].id);

    for (int i = 0; i < n; i++)
    {
        if (a[j].end < a[i].begin)
        {
            d++;
            res.push_back(a[i].id);
            j = i;
        }
    }

    cout << d << endl;
    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}
