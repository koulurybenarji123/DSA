#include<iostream>
using namespace std;
int fun(int );
int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
}
int fun(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fun(n-1);
}