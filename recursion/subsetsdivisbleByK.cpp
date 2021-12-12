#include<iostream>
#include<vector>
using namespace std;
void subseqeunce(vector<int>&,int ,vector<int>&,int,int);
int main()
{
    vector<int>v1;
    vector<int>v;
    int n,i,x,sum=0,k;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
    subseqeunce(v,0,v1,v.size(),k);
}
void subseqeunce(vector<int>&v,int idx,vector<int>&v1,int n,int sum)
{
    if(idx==n)
   {
        if(sum==0 )
        {
            for(int i=0;i<v1.size();i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
            return ;
        }
        return ;
    }
    if(v[idx]<=sum)
    {
        sum-=v[idx];
        v1.push_back(v[idx]);
        subseqeunce(v,idx,v1,n,sum);
        sum+=v[idx];
        v1.pop_back();
    }
    subseqeunce(v,idx+1,v1,n,sum);
    
}