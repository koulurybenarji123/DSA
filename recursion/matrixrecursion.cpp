#include<iostream>
#include<vector>
using namespace std;
void findpaths(int ,int ,string );
int m,n;
int main()
{
    
      string s="";
      cin>>m;
      cin>>n;
      findpaths(0,0,s);
    
}
void findpaths(int i,int j,string s)
{
    if(i>=m || j>=n)
    {
        return ;
    }
    if(i==m-1 && j==n-1)
    {
        cout<<s<<endl;
        return ;
    }
    s+='D';
    findpaths(i+1,j,s);
    s.pop_back();
    s+='R';
    findpaths(i,j+1,s);
    s.pop_back();
}