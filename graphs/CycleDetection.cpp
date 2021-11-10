#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,u,v,e;
    bool cycle=false;
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
            queue<pair<int,int>>q;
            q.push({i,-1});
            visited[i]=1;
            while (!q.empty())
            {
                int node=q.front().first;
                int par=q.front().second;
                q.pop();
                for(auto it:adj[node])
                {
                    if(!visited[it])
                    {
                        q.push({it,node});
                        visited[it]=1;
                    }
                    else if(par!=it)
                    {
                          cycle=true;  
                    }
                }
            }
        }
           if(cycle)
           {
               cout<<"cycle found"<<endl;
           }
           else
           {
               cout<<"no cycle"<<endl;
           }
    }
}