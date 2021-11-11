#include<bits/stdc++.h>
using namespace std;
bool checkcycleDFS(int ,vector<int>&,vector<int>[],int);
int main()
{
    int i,n,u,v,e;
    cin>>n>>e;

    vector<int>adj[n+1];
    vector<int>visited(n+1,0);
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
         if(checkcycleDFS(i,visited,adj,-1))
         {
             cout<<"cycle found"<<endl;
         }  
         else
         {
             cout<<"cycle not found"<<endl;
         }
      }
    }
}
bool checkcycleDFS(int node,vector<int>&vis,vector<int>adj[],int parent)
{
      vis[node]=1;
     for(auto it:adj[node])
     {
         if(!vis[it])
         {
             if(checkcycleDFS(it,vis,adj,node)) return true;
         }
         if(it!=parent)
         {
             return true;
         }
     }
     return false;
}