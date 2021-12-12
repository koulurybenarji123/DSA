#include<iostream>
#include<vector>
using namespace std;
void findpaths(int ,int ,string,vector<vector<int>>&);
int m,n;
string dir="DRLU'";
int dx[4]={+1,0,0,-1};
int dy[4]={0,+1,-1,0};
int main()
{
    
      string s="";
      cin>>m;
      cin>>n;
      vector<vector<int>>vis(n,vector<int>(m,0));
      findpaths(0,0,s,vis);
    
}
void findpaths(int i,int j,string s,vector<vector<int>>&vis)
{
    if(i>=m || j>=n || i<0 || j<0 || vis[i][j]==1)
    {
        return ;
    }
    if(i==m-1 && j==n-1)
    {
        cout<<s<<endl;
        return ;
    }
    vis[i][j]=1;
    for(int x=0;x<4;x++)
    {
        s+=dir[x];
        findpaths(i+dx[x],j+dy[x],s,vis);
        s.pop_back();
    }
    vis[i][j]=0;
}