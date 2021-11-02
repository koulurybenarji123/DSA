#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,j=0,len=0,max=-1,start=0;
    unordered_map<char,int>m;
    while(j<s.length())
    {
        char c=s[j];
        if(m.count(c) and m[c]>=i)
        {
            i=m[c]+1;
            len=j-i;
        }
        m[c]=j;
        len++;
        j++;
        if(len>max)
        {
            max=len;
            start=i;
        }
    }
    cout<<start<<max;

}
