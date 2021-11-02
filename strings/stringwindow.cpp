#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    int FS[256]={0};
    int FP[256]={0};
    int i,j,count=0,start=0,min=INT_MAX,start_idx=-1;
    cin>>s;
    cin>>p;
    for(i=0;i<p.length();i++)
    {
        FP[p[i]]++;
    }
     for(i=0;i<s.length();i++)
    {
      char c=s[i];
      FS[c]++;
      if(FP[c]!=0 and FS[c]<=FP[c])
      {
          count++;
      }
      if(count==p.length())
      {
          while(FP[s[start]]==0 or FS[s[start]]>FP[s[start]])
          { 
              FS[s[start]]--;
              start++;
          }
          int window_size=i-start+1;
          if(window_size<min)
          {
              min=window_size;
              start_idx=start;
          }

      }
    }
    if(start_idx==-1)
    {
        cout<<"not found";
    }
    cout<<s.substr(start_idx,min);
}