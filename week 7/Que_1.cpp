#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> g[n + 1];
    for(int i = 0; i < m; i++)
    {

        int u, v, wt;
        cin >> u >> v >> wt;
        g[u].push_back(make_pair(v, wt));
        g[v].push_back(make_pair(u, wt));
    }
    priority_queue<pair<int,int>, vector<pair<int, int>>,  greater<pair<int,int>>> pq;
    vector<int> dist(n + 1, INT_MAX);
    int src;
    cin >> src;
    dist[src] = 0;
    pq.push(make_pair(0, src));
    while(!pq.empty())
    {
        int dt = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        vector<pair<int, int>> :: iterator it;
        for(it = g[prev].begin(); it != g[prev].end(); it++)
        {
            int next = it -> first;
            int nextDist = it -> second;
            if(dist[next] > dist[prev] + nextDist)
            {
                dist[next] = dist[prev] + nextDist;
                pq.push(make_pair(dist[next], next));
            }
        }
    }
    cout << "The distances from source " << src << " are" << endl;
    for(int i = 1; i <= n; i++)
        cout << dist[i] << " ";
}
