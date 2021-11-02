#include<iostream>
#include<vector>
using namespace std;
void subseqeunce(vector<int>&,int ,vector<int>&,int );
int main()
{
    vector<int>v,v1;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
    subseqeunce(v,0,v1,v.size());
}
void subseqeunce(vector<int>&v,int idx,vector<int>&v1,int n)
{
    if(idx==n)
    {
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    v1.push_back(v[idx]);
    subseqeunce(v,idx+1,v1,n);
    v1.pop_back();
    subseqeunce(v,idx+1,v1,n);

}