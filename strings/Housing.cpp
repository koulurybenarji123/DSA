#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    int n=5,i,sum=0,k=7,l=0,r=v.size(),j=0;
    while(l<r)
    {
        sum=sum+v[l];
        l++;
        if(sum==k)
        {
            cout<<j<<r-1<<endl;
        }
        if(sum>k)
        {
            sum=sum-v[j];
            j++;
            
        }
    }


}