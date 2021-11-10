#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,u,v,e;
    cin>>n>>e;

    vector<int>adj[n+1];
    vector<int>visited(n+1,0);
    vector<int>bfs;
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
            queue<int>q;
            q.push(i);
            visited[i]=1;
            while (!q.empty())
            {
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node])
                {
                    if(!visited[it])
                    {
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
            
        }
    }
    for(i=0;i<bfs.size();i++)
    {
        cout<<bfs[i]<<endl;
    }

}