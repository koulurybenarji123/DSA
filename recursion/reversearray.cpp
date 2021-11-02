#include<iostream>
using namespace std;
void reverse(int [],int ,int );
int main()
{
    int n,i;
    cin>>n;
    int a[10];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,0,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void reverse(int a[],int l,int h)
{
    if(l>h/2)
    {
        return;
    }
    swap(a[l],a[h-l-1]);
    l++;
    reverse(a,l,h);
}