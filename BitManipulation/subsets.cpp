#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int i,n,x,bit,num;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    for ( num = 0; num<pow(2,n); num++)
    {
        vector<int>subsets;
        for(bit=0;bit<n;bit++)
        {
            if(num & 1<<bit)
            {
               subsets.push_back(arr[bit]);
            }
        }
        for(auto it:subsets)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }
    
}

