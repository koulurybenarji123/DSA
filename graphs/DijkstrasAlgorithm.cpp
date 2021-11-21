#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,i,src;
    int u,v,w;
    cin>>n;
    vector<pair<int,int>>adj[n+1];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>distnode;
    vector<int>dist(n+1,INT_MAX);
    cin>>e;
    for ( i = 0; i < e; i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    cin>>src;
    dist[src]=0;
    distnode.push({0,src});
    while (!distnode.empty())
    {
        int node=distnode.top().second;
        distnode.pop();
        for(auto it:adj[node])
        {
            if(dist[node]+it.second<dist[it.first])
            {
                 dist[it.first]=dist[node]+it.second;
                 distnode.push({dist[it.first],it.first});
            }
        }
    }
    for ( i = 1; i <= dist.size(); i++)
    {
        cout<<src<<" -> "<<i<<" "<<dist[i]<<endl;
    }
    

}