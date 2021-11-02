#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    int i,j;
    int check[256]={0};
    int sub=-1;
    cin>>s;
    cin>>p;
    for(i=0;i<p.length();i++)
    {
        check[p[i]]++;
    }
    for(i=0;i<s.length();i++)
    {
        check[s[i]]--;
    }
     for(i=0;i<p.length();i++)
    {
       
       if(check[i]>=1)
       {
          sub=0;
       }
    }
    if(sub==-1)
    {
        cout<<"sub";
    }
}