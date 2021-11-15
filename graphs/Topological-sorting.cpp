#include<bits/stdc++.h>
using namespace std;
void toposort(int ,vector<int>[],vector<int>&,stack<int>&);
int main()
{
   int n,e,i;
   int u,v;
   cin>>n;
   vector<int>adj[n];
   vector<int>visited(n,0);
   stack<int>s;
   cin>>e;
   for(i=0;i<e;i++)
   {
       cin>>u>>v;
       adj[u].push_back(v);
   }
   for(i=0;i<n;i++)
   {
       if(!visited[i])
       {
           toposort(i,adj,visited,s);
       }
   }
    while(!s.empty())
    {
       cout<<s.top()<<" ";
       s.pop();
    }
   

}
void toposort(int node,vector<int>adj[],vector<int>&visited,stack<int>&s)
{
       visited[node]=1;
       for(auto it:adj[node])
       {
           if(!visited[it])
           {
               toposort(it,adj,visited,s);
           }
       }
       s.push(node);

}
