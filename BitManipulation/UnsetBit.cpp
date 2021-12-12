#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mask,pos;
    cin>>n;
    cin>>pos;
    mask=~(1<<pos);
    n=n&mask;
    cout<<n; 

}