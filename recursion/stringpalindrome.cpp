#include<iostream>
using namespace std;
bool palindrome(string ,int ,int );
int main()
{
    string s="madam";
    
    cout<<palindrome(s,0,s.length());
}
bool palindrome(string s,int i,int n)
{
    if(i>n/2)
    {
        return true;
    }
    if(s[i]==s[n-i-1])
    {
        i++;
        return palindrome(s,i,n);
    }
    return false;
}