#include<bits/stdc++.h>
using namespace std;
void dfs(int ,vector<int>&,vector<int>[],vector<int>&);
int main()
{
    int i,n,u,v,e;
    cin>>n>>e;

    vector<int>adj[n+1];
    vector<int>visited(n+1,0);
    vector<int>DFS;
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
      if(!visited[i])
      {
         dfs(i,visited,adj,DFS);  
      }
    }
    for(i=0;i<DFS.size();i++)
    {
        cout<<DFS[i]<<" ";
    }
}
void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&DFS)
{
      DFS.push_back(node);
      vis[node]=1;
     for(auto it:adj[node])
     {
         if(!vis[it])
         {
         dfs(it,vis,adj,DFS);
         }
     }
}