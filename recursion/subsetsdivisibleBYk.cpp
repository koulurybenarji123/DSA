#include<iostream>
#include<vector>
using namespace std;
void subseqeunce(vector<int>&,int ,vector<int>&,int,int ,int );
int main()
{
    vector<int>v1;
    vector<int>v={3,6};
    int n,i,x,sum=0,k;
    // cin>>n;
    // cin>>k;
    // for(i=0;i<n;i++)
    // {
    //     cin>>x;
    //     v.push_back(x);
        
    // }
    subseqeunce(v,0,v1,v.size(),0,3);
}
void subseqeunce(vector<int>&v,int idx,vector<int>&v1,int n,int sum,int k)
{
    if(sum%k==0 && sum!=0)
    {
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        if(idx==n)
        {
        return ;
        }
    }
    v1.push_back(v[idx]);
    sum+=v[idx];
    subseqeunce(v,idx+1,v1,n,sum,k);
    v1.pop_back();
    sum-=v[idx];
    subseqeunce(v,idx+1,v1,n,sum,k);

}