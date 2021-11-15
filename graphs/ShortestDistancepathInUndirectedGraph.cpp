#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,e,i;
   int u,v;
   cin>>n;
   vector<int>adj[n];
   vector<int>dist(n,INT_MAX);
   queue<int>q;
   cin>>e;
   for(i=0;i<e;i++)
   {
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   int src;
   cin>>src;
   dist[src]=0;
   q.push(src);
   while(!q.empty())
   {
       int node=q.front();
       q.pop();
       for(auto it:adj[node])
       {
          if(dist[node]+1<dist[it])
          {
              dist[it]=dist[node]+1;
              q.push(it);
          }  
       }
   }
   for ( i = 0; i < dist.size(); i++)
   {
       cout<<dist[i]<<" ";
   }
   
      
}