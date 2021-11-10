#include<bits/stdc++.h>
using namespace std;

bool checkCycle(vector<int> adj[], vector<int> &vis, vector<int> &dfsvis, int node)
{
    vis[node] = 1;
    dfsvis[node] = 1;
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            if(checkCycle(adj, vis, dfsvis, it))
                return true;
        }
        else if(dfsvis[it])
            return true;
    }
    dfsvis[node] = 0;
    return false;
}

bool isCyclic(vector<int> adj[], int n)
{
    vector<int> vis(n + 1, 0);
    vector<int> dfsvis(n + 1, 0);
    for(int i = 0; i <= n; i++)
    {
        if(!vis[i])
        {
            if(checkCycle(adj, vis, dfsvis, i))
                return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cout << "It is a directed graph. Enter number of nodes and edges" << endl;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter nodes having edges (u -> v)" << endl;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    cout << "Cycle Present (1 / 0) : " << isCyclic(adj, n);
    return 0;
}
