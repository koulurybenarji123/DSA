#include<iostream>
#include<vector>
using namespace std;
int subseqeunce(vector<int>&,int ,int,int);
int main()
{
    vector<int>v;
    int n,i,x,sum=0,k;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
    cout<<subseqeunce(v,0,v.size(),k);
}
int subseqeunce(vector<int>&v,int idx,int n,int sum)
{
      if(idx==n)
      {
          if(sum==0)
          {
               return 1;
          }
          else
          {
              return 0;
          }
      }
      int left=0,right=0;
      if(v[idx]<=sum)
      {
      sum-=v[idx];
      left=subseqeunce(v,idx,n,sum);
      sum+=v[idx];
      }
      right=subseqeunce(v,idx+1,n,sum);

      return left+right;
}