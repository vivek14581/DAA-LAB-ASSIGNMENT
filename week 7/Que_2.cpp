#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u, v, wt;
    node(int first, int second, int wt)
    {
        u = first;
        v = second;
        wt = wt;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<node> edges;
    for(int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    int src;
    cin >> src;
    int inf = 1e7;
    vector<int> dist(n, inf);
    dist[src] = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        for(auto it : edges)
        {
            if(dist[it.u] + it.wt < dist[it.v])
                dist[it.v] = dist[it.u] + it.wt;
        }
    }
    int fl = 0;
    for(auto it : edges)
    {
        if(dist[it.u] + it.wt < dist[it.v])
        {
            cout << "Negative cycle";
            fl = 1;
            break;
        }
    }
    if(!fl)
    {
        for(int i = 0; i < n; i++)
            cout << i << " " << dist[i] << endl;
    }
    return 0;
}
