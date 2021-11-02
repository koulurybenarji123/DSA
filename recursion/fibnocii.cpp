#include<iostream>
using namespace std;
int fib(int );
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}
int fib(int n)
{
    if(n<=1)
    {
        return n;

    }
    int ans1=fib(n-2);
    int ans2=fib(n-1);
    return ans1+ans2;
}