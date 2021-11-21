#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,i,src;
    int u,v,w;
    cin>>n;
    vector<pair<int,int>>adj[n];
    cin>>e;
    for ( i = 0; i < e; i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<int>key(n,INT_MAX);
    vector<int>parent(n,-1);
    vector<bool>mstSet(n,false);
    key[0]=0;
    for(i=0;i<e-1;i++)
    {
          int mini=INT_MAX,u;
          for(int v=0;v<n;v++)
          {
              if(mstSet[v]==false && key[v]<mini)
              {
                  mini=key[v];
                  u=v;
              }
          }
        mstSet[u]=true;
        for(auto it:adj[u])
        {
             int v=it.first;
             int weight=it.second;
             if(mstSet[v]=false && weight<key[v])
             {
                 parent[v] = u, key[v] = weight; 
             }
        }

    }
       for (int i = 1; i < n; i++) 
        cout << parent[i] << " - " << i <<" \n"; 

}