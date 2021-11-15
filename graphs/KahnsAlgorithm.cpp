#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,e,i;
   int u,v;
   cin>>n;
   vector<int>adj[n];
   vector<int>indegree(n,0);
   vector<int>topo;
   queue<int>q;
   cin>>e;
   for(i=0;i<e;i++)
   {
       cin>>u>>v;
       adj[u].push_back(v);
   }
   for(i=0;i<n;i++)
   {
       for(auto it:adj[i])
       {
           indegree[it]++;
       }
   }
   for(i=0;i<n;i++)
   {
       if(indegree[i]==0)
       {
           q.push(i);
       }
   }
   while(!q.empty())
   {
       int node=q.front();
       q.pop();
       topo.push_back(node);
       for(auto it:adj[node])
       {
           indegree[it]--;
           if(indegree[it]==0)
           {
               q.push(it);
           }
       }
   }
   for(i=0;i<topo.size();i++)
   {
       cout<<topo[i]<<" ";
   }


}