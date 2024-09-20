#include <bits/stdc++.h>
using namespace std;

#define nmax 100000
vector<int> graph[nmax];
bool visited[nmax] = {false};

void dfs(int u)
{
    visited[u] = true;
    for (int v : graph[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    freopen("MESS.INP", "r", stdin);
    freopen("MESS.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int d = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {

            dfs(i);
            d++;
        }
    }

    cout << d;

    return 0;
}
