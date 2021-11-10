#include<bits/stdc++.h>
using namespace std;

bool checkBipartite(vector<int> adj[], vector<int> &clr, int n, int src)
{
    queue<int> q;
    q.push(src);
    clr[src] = 1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it : adj[node])
        {
            if(clr[it] == -1)
            {
                clr[it] = 1 - clr[node] ;
                q.push(it);
            }
            if(clr[it] == clr[node])
                return false;
        }
    }
    return true;
}
bool bipartite(vector<int> adj[], int n)
{
    vector<int> clr(n + 1, -1);
    for(int i = 0; i < n; i++)
    {
        if(clr[i] == -1)
        {
            if(checkBipartite(adj, clr, n, i))
                return true;
        }
    }
    return false;
}
int main()
{
    int n, m;
    cout << "Enter number of nodes and edges" << endl;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter nodes having edges" << endl;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << "Graph is Bipartite (1 / 0) : " << bipartite(adj, n);
    return 0;
}
