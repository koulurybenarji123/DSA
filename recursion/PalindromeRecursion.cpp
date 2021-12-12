#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&,vector<int>&,int ,vector<vector<int>>&,vector<int>&);
int main()
{
    int x,n,i;
    vector<vector<int>>ans;
    vector<int>ds;
    vector<int>v;
    cin>>n;
    vector<int>freq(n,0);
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    permutation(v,freq,n,ans,ds);
    for(auto v:ans)
    {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void permutation(vector<int>&v,vector<int>&freq,int n,vector<vector<int>>&ans,vector<int>&ds)
{
    if(ds.size()==n)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<v.size();i++)
    {
        if(!freq[i])
        {
            ds.push_back(v[i]);
            freq[i]=1;
            permutation(v,freq,n,ans,ds);
            ds.pop_back();
            freq[i]=0;
        }
    }
}