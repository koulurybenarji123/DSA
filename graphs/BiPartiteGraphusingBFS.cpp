#include<bits/stdc++.h>
using namespace std;
bool checkBipirateBFS(int ,vector<int>[],vector<int>&);
int main()
{
    int i,n,u,v,e;
    cin>>n>>e;
    vector<int>adj[n+1];
    vector<int>color(n,-1);
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=e;i++)
    {
        if(color[i]==-1)
        {
            if(checkBipirateBFS(i,adj,color))
            {
                cout<<"yes";
            }
            else
            {
                cout<<"no";
            }
        }
    }
}
bool checkBiprateBFS(int i,vector<int>adj[],vector<int>&color)
{
    queue<int>q;
    q.push(i);
    color[i]=1;
    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
                q.push(it);
                color[it]=1-color[node];
            }
            else if(color[it]==color[node])
            {
                return false;
            }
        }
    }
    

}
