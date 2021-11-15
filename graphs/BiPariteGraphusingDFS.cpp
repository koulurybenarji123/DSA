#include<bits/stdc++.h>
using namespace std;
bool checkBiprateDFS(int ,vector<int>[],vector<int>&);
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
            if(checkBiprateDFS(i,adj,color))
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
bool checkBiprateDFS(int node,vector<int>adj[],vector<int>&color)
{
        color[node]=1;
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[node];
                if(!checkBiprateDFS(it,adj,color))
                {
                    return false;
                }
            }
            else if(color[it]==color[node])
            {
                return false;
            }
        }
        return true;
}
