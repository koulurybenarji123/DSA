#include<bits/stdc++.h>
using namespace std;
void toposort(int node,vector<pair<int,int>>adj[],stack<int>&s,vector<int>&visited)
{
      visited[node]=1;
      for(auto it:adj[node])
      {
          if(!visited[it.first])
          {
              toposort(it.first,adj,s,visited);
          }
      }
      s.push(node);
}
int main()
{
    int n,e,i,src;
    int u,v,w;
    cin>>n;
    vector<pair<int,int>>adj[n];
    vector<int>dist(n,INT_MAX);
    vector<int>visited(n,0);
    stack<int>topo;
    cin>>e;
    for ( i = 0; i < e; i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    cin>>src;
    for ( i = 0; i < e; i++)
    {
       if(!visited[i])
       {
           toposort(i,adj,topo,visited);
       }
    }
    dist[src]=0;
    while (!topo.empty())
    {
        int node=topo.top();
        topo.pop();
         if(dist[node]!=INT_MAX)
        {
                for(auto it:adj[node])
            {
                if(it.second+dist[node]<dist[it.first])
                {
                    dist[it.first]=dist[node]+it.second;
                }
            }
        }
    }
    for ( i = 0; i < dist.size(); i++)
    {
        cout<<src<<" -> "<<i<<" "<<dist[i]<<endl;
    }
}